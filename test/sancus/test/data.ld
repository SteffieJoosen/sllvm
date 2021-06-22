sllvm_pm_globalmov_data_start = .;
*(.sllvm.data.globalmov)
*(.sllvm.data.lr1addr.globalmov) /* Make sure ptr to local sp is put last */
sllvm_pm_globalmov_data_end = .;

sllvm_pm_sancus_step_data_start = .;
*(.sllvm.data.sancus_step)
*(.sllvm.data.lr1addr.sancus_step) /* Make sure ptr to local sp is put last */
sllvm_pm_sancus_step_data_end = .;
