sllvm_pm_globaladd_text_start = .;
*(.sllvm.text.dispatch.globaladd)  /* Make sure the dispatcher is put first */
*(.sllvm.text.globaladd)
sllvm_pm_globaladd_text_end = .;

sllvm_pm_sancus_step_text_start = .;
*(.sllvm.text.dispatch.sancus_step)  /* Make sure the dispatcher is put first */
*(.sllvm.text.sancus_step)
sllvm_pm_sancus_step_text_end = .;
