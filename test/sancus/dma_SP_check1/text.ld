sllvm_pm_SPcheck1_text_start = .;
*(.sllvm.text.dispatch.SPcheck1)  /* Make sure the dispatcher is put first */
*(.sllvm.text.SPcheck1)
sllvm_pm_SPcheck1_text_end = .;

sllvm_pm_sancus_step_text_start = .;
*(.sllvm.text.dispatch.sancus_step)  /* Make sure the dispatcher is put first */
*(.sllvm.text.sancus_step)
sllvm_pm_sancus_step_text_end = .;
