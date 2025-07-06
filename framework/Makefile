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
					launcher/get_child_status.c \
					launcher/libunit_launch.c \
					launcher/prt_tests_result.c \
					t_libunit/libunit_finish.c \
					t_libunit/libunit_free.c \
					t_libunit/libunit_load.c \
					t_libunit/libunit_new.c \
					t_libunit/libunit_start_collection.c \
					t_libunit/unit_test_free.c \
					t_libunit/unit_test_new.c \
					utils/prt_total_stats.c \
)


include				$(MAKEFILES_DIR)/config.mk
include				$(MAKEFILES_DIR)/build.mk
include				$(MAKEFILES_DIR)/doc.mk
include				$(MAKEFILES_DIR)/help.mk
