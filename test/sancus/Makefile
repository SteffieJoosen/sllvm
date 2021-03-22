##############################################################"
# Unit tests
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

# 1) Nemdef unit tests (have high code coverage)
DMADEF =
DMADEF += dma_class_5
DMADEF += dma_class_51
DMADEF += triangle
DMADEF += diamond
DMADEF += fork
DMADEF += multifork
DMADEF += call
DMADEF += indirect
DMADEF += ifcompound
DMADEF += loop
DMADEF += ifthenloop
DMADEF += ifthenloopif
DMADEF += ifthenlooploop
DMADEF += ifthenlooplooptail

# 2) Compiler runtime functions (e.g. Routines for integer arithmetic)
#   o libgcc      (GCC) : gcc-8.2.0/libgcc/config/msp430/mpy.c
#                        used by MSP430 GCC
#                        (MSPGCC has a similar timing channel [Cuyt])
#   o compiler-rt (LLVM): has no support for MSP430
DMADEF += mulhi3

# 3) Primitives from cryptographic libraries
# [Agat, 2000]
#DMADEF +=
# [Molnar, 2005] (section 5.1)
#DMADEF +=
# [Coppens, 2009] (section 4)
# "The following is an example in pseudocode based on Applied Cryptography by
#   Bruce Schneier." [Wikipedia]
DMADEF += modexp
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
	$(PYTHON) pp2.py > $(RESULT_DIR)/performance.csv

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
