sllvm_pm_SPcheck2_text_start = .;
*(.sllvm.text.dispatch.SPcheck2)  /* Make sure the dispatcher is put first */
*(.sllvm.text.SPcheck2)
sllvm_pm_SPcheck2_text_end = .;

sllvm_pm_sancus_step_text_start = .;
*(.sllvm.text.dispatch.sancus_step)  /* Make sure the dispatcher is put first */
*(.sllvm.text.sancus_step)
sllvm_pm_sancus_step_text_end = .;
