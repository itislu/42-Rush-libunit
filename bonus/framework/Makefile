include				$(shell git rev-parse --show-toplevel)/bonus/build/setup.mk


# ***************************** CONFIGURATION ******************************** #

NAME			:=	libunit_bonus.a
MSG_PROGRESS	:=	"🛠️ "
COLOR_MAKE		=	$(STY_GRE)


#	Dependencies

LIBS_LOCAL		=	$(REPO_ROOT)/libft/libft.a


#	Files

SRC_DIR			:=	src
SRC				:=	$(addprefix $(SRC_DIR)/, \
					launcher/get_child_status_bonus.c \
					launcher/libunit_launch_bonus.c \
					launcher/test_basic_bonus.c \
					launcher/test_stdout_bonus.c \
					launcher/handle_error.c \
					t_libunit/libunit_finish_bonus.c \
					t_libunit/libunit_free_bonus.c \
					t_libunit/libunit_load_bonus.c \
					t_libunit/libunit_new_bonus.c \
					t_libunit/libunit_set_timeout.c \
					t_libunit/libunit_start_collection_bonus.c \
					t_libunit/unit_test_free_bonus.c \
					t_libunit/unit_test_new_bonus.c \
					utils/prt_total_stats_bonus.c \
					utils/prt_test_start_bonus.c \
					utils/prt_tests_result_bonus.c \
					utils/log_init.c \
					utils/timer.c \
)


include				$(MAKEFILES_DIR)/config.mk
include				$(MAKEFILES_DIR)/build.mk
include				$(MAKEFILES_DIR)/doc.mk
include				$(MAKEFILES_DIR)/help.mk
