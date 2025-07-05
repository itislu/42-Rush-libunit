include				$(shell git rev-parse --show-toplevel)/build/setup.mk


# ***************************** CONFIGURATION ******************************** #

# TODO Not sure yet if this Makefile should exist and what it should do

.DEFAULT		:
				$(MAKE) --directory=framework

# .PHONY			:	test
# test			:
# 				$(MAKE) test --directory=
