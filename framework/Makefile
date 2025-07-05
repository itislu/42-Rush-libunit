include				$(shell git rev-parse --show-toplevel)/build/setup.mk


# ***************************** CONFIGURATION ******************************** #

NAME			:=	libunit.a
MSG_PROGRESS	:=	"🛠️ "
COLOR_MAKE		=	$(STY_GRE)


#	Dependencies

LIBS_LOCAL		=	$(LIB_ROOT_DIR)/libft/libft.a


#	Files

SRC_DIR			:=	src
SRC				:=	$(addprefix $(SRC_DIR)/, \
					a_lib_function.c \
)


include				$(MAKEFILES_DIR)/config.mk
include				$(MAKEFILES_DIR)/build.mk
include				$(MAKEFILES_DIR)/doc.mk
include				$(MAKEFILES_DIR)/help.mk
