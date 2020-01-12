##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC        =    gcc

SRC     =	src/background_draw.c	\
			src/link_anim.c			\
			src/link_script.c		\
			src/main_extend.c		\
			src/run_event.c			\
			src/run_main.c			\
			src/run_sound.c			\
			src/run_tools_1.c		\
			src/create_map.c		\
			src/set_obj.c			\
			src/initialise_tile.c	\
			src/gravity.c			\
			src/menu.c				\
			src/sound_manager.c		\
			src/draw_ui.c			\
			src/score.c				\
			src/skin.c				\
			src/draw_skin.c			\
			src/select_level.c		\
			src/draw_level.c		\

OBJ     =	$(SRC:.c=.o) 			\

COVERAGE		=	$(SRC:.c=.gcda)				\
					$(MAIN_SRC:.c=.gcda)		\
					$(TEST_SRC:.c=.gcda)		\
					$(SRC:.c=.gcno)				\
					$(MAIN_SRC:.c=.gcno)		\
					$(TEST_SRC:.c=.gcno)		\

MAIN_SRC    =    src/main.c			\

MAIN_OBJ    =    $(MAIN_SRC:.c=.o)	\

CFLAGS    =    -I./include -Wextra --coverage -l csfml-graphics -l csfml-system -l csfml-audio

TARGET    =    my_runner		\

TEST_SRC     =     tests/criterion.c		\

TEST_OBJ     =     $(TEST_SRC:.c=.o)

TEST_TARGET     =     unit_tests

LDFLAGS     =     -lcriterion

all: $(TARGET)

build_lib:
	cd lib/my/ && make
	cp lib/my/libmy.a lib/
	cp lib/my/my.h include/

$(TARGET): $(OBJ) $(MAIN_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MAIN_OBJ) -o $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(MAIN_OBJ) $(TEST_OBJ) $(COVERAGE)

fclean: clean
	rm -f $(TARGET) $(TEST_TARGET)

re:    fclean all

tests_build: $(OBJ) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJ) $(TEST_OBJ) -o $(TEST_TARGET)

tests_run: tests_build
	./$(TEST_TARGET)
	gcovr --exclude tests/

re_tests: fclean tests_run