include				$(shell git rev-parse --show-toplevel)/build/setup.mk


# ***************************** CONFIGURATION ******************************** #

NAME			:=	$(basename $(REPO_SUBDIR))
MSG_PROGRESS	:=	"📝"
MSG_USAGE		?=	"Usage: make test"
COLOR_MAKE		=	$(STY_GRE)


#	Dependencies

LIBS_LOCAL		=	$(REPO_ROOT)/framework/libunit.a \
					$(LIB_ROOT_DIR)/libft/libft.a


#	Files

SOURCELIST_DIRS	:=	ft_atoi ft_snprintf
SOURCELISTS		:=	$(addsuffix /sourcelist.mk,$(SOURCELIST_DIRS))
SRC_DIR			:=	.
SRC				:=	main.c
include				$(SOURCELISTS)
SRC				:=	$(addprefix $(SRC_DIR)/,$(SRC))


include				$(MAKEFILES_DIR)/config.mk
include				$(MAKEFILES_DIR)/build.mk
include				$(MAKEFILES_DIR)/doc.mk
include				$(MAKEFILES_DIR)/help.mk
