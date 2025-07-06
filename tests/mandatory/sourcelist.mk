SRC	+=	$(addprefix mandatory/, \
		00_launcher.c \
		01_ok.c \
		02_ko.c \
		03_sigsegv.c \
		04_sigbus.c \
		05_stackoverflow.c \
		06_mmap_permissions.c \
)
