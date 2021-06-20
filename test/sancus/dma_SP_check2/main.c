#include <stdio.h>
#include "sancus_support/sm_io.h"
#include "sancus_support/sancus_step.h"

#include "nemdef.h"
#include "SPcheck2.h"

asm(".section __interrupt_vector_10,\"ax\",@progbits \n\t"
    ".word timerA_isr_entry2                         \n\t");

void attack(void)
{
  __ss_print_latency();
}

int main(void)
{
  msp430_io_init();

#ifdef SANCUS_STEP_ENABLED
  __ss_init();
#endif

  sancus_enable(&SPcheck2);
  struct test x = {5, 6};
  //int y[7] = {1,2,3,4,5,6,7};
  //int z[7] = {1,2,3,4,5,6,7};
  ATTACK(SPcheck2_enter, 1, 2, &x, 4);
  ATTACK(SPcheck2_enter, 2, 1, &x, 4);

  EXIT();

  return 0;
}

SANCUS_STEP_ISR_ENTRY2(attack, __ss_end);
