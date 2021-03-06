#include <stdio.h>
#include "sancus_support/sm_io.h"
#include "sancus_support/sancus_step.h"

#include "nemdef.h"
#include "mul32.h"

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

  sancus_enable(&mul32);

#if 1
  ATTACK(mul32_enter, 0, 0);
  ATTACK(mul32_enter, 0, 1);
  ATTACK(mul32_enter, 1, 0);
  ATTACK(mul32_enter, 1, 1);
  ATTACK(mul32_enter, 10, 123456);
#else
  printf("%lu\n", mul32_enter(0, 0));
  printf("%lu\n", mul32_enter(0, 1));
  printf("%lu\n", mul32_enter(1, 0));
  printf("%lu\n", mul32_enter(1, 1));
  printf("%lu\n", mul32_enter(2, 2));
  printf("%lu\n", mul32_enter(8, 6));
  printf("%lu\n", mul32_enter(127, 7));
  printf("%lu\n", mul32_enter(10, 123456));
#endif

  EXIT();

  return 0;
}

SANCUS_STEP_ISR_ENTRY2(attack, __ss_end);
