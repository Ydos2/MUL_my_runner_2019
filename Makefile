##
## EPITECH PROJECT, 2019
## COMPILATION
## File description:
## Makefile
##

NAMELIB		= libmy.a
DIRLIB		=./lib/
DIRLIBMY		=./lib/my/
DIRTEST		=./tests/*.c

SRC		=	background_draw.c	\
			link_anim.c			\
			link_script.c		\
			main_extend.c		\
			run_event.c			\
			run_main.c			\
			run_sound.c			\
			run_tools_1.c		\
			create_map.c		\
			set_obj.c			\
			initialise_tile.c	\
			gravity.c

SRC_TESTS	=	criterion.c

SRC_O	=	background_draw.o	\
			link_anim.o			\
			link_script.o		\
			main_extend.o		\
			run_event.o			\
			run_main.o			\
			run_sound.o			\
			run_tools_1.o		\
			create_map.o		\
			set_obj.o			\
			initialise_tile.o	\
			gravity.o

COMPIL		= gcc $(SRC) -L $(DIRLIB) -lmy -l csfml-graphics -l csfml-system -l csfml-audio -o $(EXEC)
COMPIL_DEBUG		= gcc $(SRC) -L $(DIRLIB) -lmy -l csfml-graphics -l csfml-system -l csfml-audio -o $(EXEC) -g3
COMPIL_TEST		= gcc $(SRC) -g3 -L $(DIRLIB) $(DIRTEST) --coverage -lcriterion -lmy -l csfml-graphics -l csfml-system -l csfml-audio -o $(EXEC_TEST)
EXEC		= my_runner
EXEC_TEST		= tests_my_runner
RUN_TESTS	=	./$(EXEC_TEST)
RUN_VALGRIND	=	valgrind --leak-resolution=high --num-callers=40 --track-origins=yes ./$(EXEC) map/map1

COVERAGE	=	gcovr --exclude tests/
COVERAGE_BRANCH		=	gcovr --exclude tests/ -b

all	: make compilation clean

make:
		cd $(DIRLIBMY) && make

compilation:
		$(COMPIL)

compilation_test:
		$(COMPIL_TEST)

compilation_debug:
		$(COMPIL_DEBUG)

run_test:
		$(RUN_TESTS)
		$(COVERAGE)
		$(COVERAGE_BRANCH)

run_valgrind:
		$(RUN_VALGRIND)

clean:
		rm -f $(SRC_O)

test_clean:
		rm -f *.gcda rm -f *.gcno

fclean: clean test_clean
		rm -f $(EXEC) $(EXEC_TEST) $(DIRLIB)$(NAMELIB)

re: fclean all

tests_run: make compilation compilation_test run_test clean test_clean

debug: make compilation compilation_debug clean

valgrind: make compilation compilation_debug run_valgrind clean