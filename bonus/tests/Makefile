include				$(shell git rev-parse --show-toplevel)/bonus/build/setup.mk


# ***************************** CONFIGURATION ******************************** #

NAME			:=	$(notdir $(REPO_SUBDIR))
MSG_PROGRESS	:=	"🧪"
MSG_USAGE		?=	"Usage: ./$(NAME)"
COLOR_MAKE		=	$(STY_GRE)


#	Dependencies

LIBS_LOCAL		=	$(LIB_ROOT_DIR)/framework/libunit_bonus.a \
					$(REPO_ROOT)/libft/libft.a


#	Files

SOURCELIST_DIRS	:=	bonus
SOURCELISTS		:=	$(addsuffix /sourcelist.mk,$(SOURCELIST_DIRS))
SRC_DIR			:=	.
SRC				:=	main_bonus.c
include				$(SOURCELISTS)
SRC				:=	$(addprefix $(SRC_DIR)/,$(SRC))


include				$(MAKEFILES_DIR)/config.mk
include				$(MAKEFILES_DIR)/build.mk
include				$(MAKEFILES_DIR)/doc.mk
include				$(MAKEFILES_DIR)/help.mk
