sllvm_pm_matrixcc16_data_start = .;
*(.sllvm.data.matrixcc16)
*(.sllvm.data.lr1addr.matrixcc16) /* Make sure ptr to local sp is put last */
sllvm_pm_matrixcc16_data_end = .;

sllvm_pm_sancus_step_data_start = .;
*(.sllvm.data.sancus_step)
*(.sllvm.data.lr1addr.sancus_step) /* Make sure ptr to local sp is put last */
sllvm_pm_sancus_step_data_end = .;
