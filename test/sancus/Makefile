##############################################################"
# Unit tests for Nemesis
##############################################################"

TESTS =
TESTS += multiply
TESTS += hello

TEST_ALL   = $(TESTS:=.all)
TEST_SIM   = $(TESTS:=.sim)
TEST_CLEAN = $(TESTS:=.clean)

all  : $(TEST_ALL)
sim  : $(TEST_SIM)
clean: $(TEST_CLEAN)

$(TEST_ALL): %.all:
	$(MAKE) -C $* all

$(TEST_SIM): %.sim:
	$(MAKE) -C $* sim

$(TEST_CLEAN): %.clean:
	$(MAKE) -C $* clean

##############################################################"
# Nemesis Defender benchmarks
##############################################################"

RESULT_DIR = results
PYTHONPATH = ../../sancus/crypto

RMDIR = rm -rf
MKDIR = mkdir -p
PYTHON = PYTHONPATH=$(PYTHONPATH) python3
LATEXMK = latexmk

NEMDEF =

# 0) Test internalized (constant-time) compiler-rt operations
NEMDEF += multiply2
NEMDEF += divide
NEMDEF += mul32
NEMDEF += test

# 1) Nemdef unit tests (have high code coverage)
NEMDEF += triangle
NEMDEF += diamond
NEMDEF += fork
NEMDEF += multifork
NEMDEF += call
NEMDEF += indirect
NEMDEF += ifcompound
NEMDEF += loop
NEMDEF += ifthenloop
NEMDEF += ifthenloopif
NEMDEF += ifthenlooploop
NEMDEF += ifthenlooplooptail

# 2) Compiler runtime functions (e.g. Routines for integer arithmetic)
#   o libgcc      (GCC) : gcc-8.2.0/libgcc/config/msp430/mpy.c
#                        used by MSP430 GCC
#                        (MSPGCC has a similar timing channel [Cuyt])
#   o compiler-rt (LLVM): has no support for MSP430
NEMDEF += mulhi3
NEMDEF += mulhi3.ifc

# 3) Primitives from cryptographic libraries

# [Agat, 2000]
#NEMDEF +=

# [Molnar, 2005] (section 5.1)
#NEMDEF +=

# [Coppens, 2009] (section 4)
#NEMDEF +=

# "The following is an example in pseudocode based on Applied Cryptography by
#   Bruce Schneier." [Wikipedia]
NEMDEF += modexp
NEMDEF += modexp.ifc

# [Almeida, 2016]
#NEMDEF +=

# [Dewald, 2017] (section 6.2) => source code is in paper
#NEMDEF +=

# [Wu, 2018] (section 7)
#NEMDEF += threeway   # Useless since LLVM generates CT code for mu() :-/
NEMDEF += twofish
NEMDEF += twofish.ifc

# [Simon, 2018] (section 4.1.2)
# OpenSSL, mbedTLS
#NEMDEF +=

# [Cauligi, 2019] (section 5.1)
#NEMDEF +=

# AES-dust (https://github.com/odzhan/aes_dust)
#NEMDEF += aesdust  # Loop analysis fails (because of -O0)


# 4) Sancus applications (inspired on applications from Nemesis paper)
NEMDEF += bsl
NEMDEF += bsl.ifc
NEMDEF += keypad     # TODO: Support "secret return types" (or use dummy param)
NEMDEF += keypad.ifc # TODO: Support "secret return types" (or use dummy param)

# 5) Benchmark programs from transforming Out Timing Leaks, More or Less (2015)
#    (Heiko Mantel and Artem Starostin)
NEMDEF += sharevalue
NEMDEF += sharevalue.ifc
NEMDEF += kruskal
NEMDEF += kruskal.ifc
NEMDEF += mulmod8
NEMDEF += mulmod8.ifc
NEMDEF += modexp2
NEMDEF += modexp2.ifc

# 6) TI MSP430 competitive benchmarking suite
NEMDEF += math8
NEMDEF += math8.ifc
NEMDEF += matrixcc8
NEMDEF += matrixcc8.ifc
NEMDEF += switch8
NEMDEF += switch8.ifc
NEMDEF += math16
NEMDEF += math16.ifc
NEMDEF += matrixcc16
NEMDEF += matrixcc16.ifc
NEMDEF += switch16
NEMDEF += switch16.ifc
NEMDEF += math32
NEMDEF += math32.ifc
NEMDEF += mathf
NEMDEF += mathf.ifc
NEMDEF += ffilter
NEMDEF += ffilter.ifc
NEMDEF += matrixmul
NEMDEF += matrixmul.ifc

#--------------------------------------------------------------------------

NEMDEF_ALL   = $(NEMDEF:=.nemdef-all)
NEMDEF_SIM   = $(NEMDEF:=.nemdef-sim)
NEMDEF_PP    = $(NEMDEF:=.nemdef-pp)
NEMDEF_CLEAN = $(NEMDEF:=.nemdef-clean)
NEMDEF_FORCE = $(NEMDEF:=.nemdef-force)

nemdef-all  : $(NEMDEF_ALL)

nemdef-sim  : $(NEMDEF_SIM)

nemdef-pp   : $(NEMDEF_PP)
	$(RMDIR) $(RESULT_DIR)
	$(MKDIR) $(RESULT_DIR)
	$(PYTHON) pp2.py $(RESULT_DIR) > $(RESULT_DIR)/summary.txt
	#$(LATEXMK) -pdf -outdir=$(RESULT_DIR) $(RESULT_DIR)/performance.tex

nemdef-clean: $(NEMDEF_CLEAN)

nemdef-force: $(NEMDEF_FORCE)

$(NEMDEF_ALL): %.nemdef-all:
	$(MAKE) -C $* -f Makefile.vulnerable all
	$(MAKE) -C $* -f Makefile.nemdef     all

$(NEMDEF_SIM): %.nemdef-sim:
	$(MAKE) -C $* -f Makefile.vulnerable sim
	$(MAKE) -C $* -f Makefile.nemdef     sim

$(NEMDEF_PP): %.nemdef-pp:
	$(MAKE) -C $* -f Makefile.vulnerable pp
	$(MAKE) -C $* -f Makefile.nemdef     pp

$(NEMDEF_CLEAN): %.nemdef-clean:
	$(MAKE) -C $* -f Makefile.vulnerable clean
	$(MAKE) -C $* -f Makefile.nemdef     clean

$(NEMDEF_FORCE): %.nemdef-force:
	$(MAKE) $*.nemdef-clean
	$(MAKE) $*.nemdef-all


##############################################################"
# Unit tests for DMADefender
##############################################################"

TESTS =
TESTS += multiply
TESTS += hello

TEST_ALL   = $(TESTS:=.all)
TEST_SIM   = $(TESTS:=.sim)
TEST_CLEAN = $(TESTS:=.clean)

all  : $(TEST_ALL)
sim  : $(TEST_SIM)
clean: $(TEST_CLEAN)

$(TEST_ALL): %.all:
	$(MAKE) -C $* all

$(TEST_SIM): %.sim:
	$(MAKE) -C $* sim

$(TEST_CLEAN): %.clean:
	$(MAKE) -C $* clean

##############################################################"
# Nemesis Defender benchmarks
##############################################################"

RESULT_DIR = results
PYTHONPATH = ../../sancus/crypto

RMDIR = rm -rf
MKDIR = mkdir -p
PYTHON = PYTHONPATH=$(PYTHONPATH) python3
LATEXMK = latexmk


# 1) Nemdef unit tests (have high code coverage)
DMADEF =
DMADEF += dma_class_2
DMADEF += dma_class_6_mov_data
DMADEF += dma_class_5_mov_data
DMADEF += dma_class_5_add_data
DMADEF += dma_class_3_mov_data
DMADEF += dma_SP_check1
DMADEF += dma_SP_check2
DMADEF += test


# 2) Compiler runtime functions (e.g. Routines for integer arithmetic)
#   o libgcc      (GCC) : gcc-8.2.0/libgcc/config/msp430/mpy.c
#                        used by MSP430 GCC
#                        (MSPGCC has a similar timing channel [Cuyt])
#   o compiler-rt (LLVM): has no support for MSP430
#DMADEF += mulhi3


# 3) Primitives from cryptographic libraries

# [Agat, 2000]

#DMADEF +=
# [Molnar, 2005] (section 5.1)
#DMADEF +=

# "The following is an example in pseudocode based on Applied Cryptography by
#   Bruce Schneier." [Wikipedia]

#DMADEF += modexp
# [Mantel, 2015] (sections 2 and 4)
#DMADEF +=
# [Almeida, 2016]
#DMADEF +=
# [Dewald, 2017] (section 6.2) => source code is in paper
#DMADEF +=
# [Wu, 2018] (section 7)
#DMADEF += threeway   # Useless since LLVM generates CT code for mu() :-/
# [Simon, 2018] (section 4.1.2)
# OpenSSL, mbedTLS
#DMADEF +=

# [Cauligi, 2019] (section 5.1)
#DMADEF +=

# 4) Sancus applications (inspired on applications from Nemesis paper)

DMADEF += bsl
DMADEF += keypad   # TODO: Support "secret return types" (or use dummy param)


# 5) Benchmark programs from transforming Out Timing Leaks, More or Less (2015)
#    (Heiko Mantel and Artem Starostin)


# 6) TI MSP430 competitive benchmarking suite


#--------------------------------------------------------------------------

DMADEF_ALL   = $(DMADEF:=.dmadef-all)
DMADEF_SIM   = $(DMADEF:=.dmadef-sim)
DMADEF_PP    = $(DMADEF:=.dmadef-pp)
DMADEF_CLEAN = $(DMADEF:=.dmadef-clean)
DMADEF_FORCE = $(DMADEF:=.dmadef-force)

dmadef-all  : $(DMADEF_ALL)

dmadef-sim  : $(DMADEF_SIM)

dmadef-pp   : $(DMADEF_PP)
	$(RMDIR) $(RESULT_DIR)
	$(MKDIR) $(RESULT_DIR)
	$(PYTHON) pp2.py $(RESULT_DIR) > $(RESULT_DIR)/summary.txt
	#$(LATEXMK) -pdf -outdir=$(RESULT_DIR) $(RESULT_DIR)/performance.tex

dmadef-clean: $(DMADEF_CLEAN)

dmadef-force: $(DMADEF_FORCE)

$(DMADEF_ALL): %.dmadef-all:
	$(MAKE) -C $* -f Makefile.vulnerable all
	$(MAKE) -C $* -f Makefile.dmadef     all

$(DMADEF_SIM): %.dmadef-sim:
	$(MAKE) -C $* -f Makefile.vulnerable sim
	$(MAKE) -C $* -f Makefile.dmadef     sim

$(DMADEF_PP): %.dmadef-pp:
	$(MAKE) -C $* -f Makefile.vulnerable pp
	$(MAKE) -C $* -f Makefile.dmadef     pp

$(DMADEF_CLEAN): %.dmadef-clean:
	$(MAKE) -C $* -f Makefile.vulnerable clean
	$(MAKE) -C $* -f Makefile.dmadef     clean

$(DMADEF_FORCE): %.dmadef-force:
	$(MAKE) $*.dmadef-clean
	$(MAKE) $*.dmadef-all
