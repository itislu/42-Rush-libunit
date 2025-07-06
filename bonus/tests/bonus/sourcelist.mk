SRC	+=	$(addprefix bonus/, \
		00_launcher.c \
		01_ok.c \
		02_ko.c \
		03_sigsegv.c \
		04_sigbus.c \
		05_stackoverflow.c \
		06_mmap_permissions.c \
		07_timeout.c \
		08_sigill_undef_instr.c \
		09_sigill_byte_inject.c \
		10_sigill_trap.c \
		11_sigabrt_assert.c \
		12_sigabrt_abort.c \
		13_sigfpe_mod.c \
		14_sigfpe_div.c \
)
