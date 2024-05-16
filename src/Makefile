OBJ_DIR := obj
LIB_DIR := ../lib

SRCS := $(wildcard *.c)
OBJS := $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))

CFLAGS := -I../include

$(OBJ_DIR)/%.o: %.c
	mkdir -p $(OBJ_DIR)
	cc -c $(CFLAGS) -o $@ $<

$(LIB_DIR)/libmy_string_lib.a: $(OBJS)
	mkdir -p $(LIB_DIR)
	ar rcs $@ $^

.PHONY: clean

clean:
	rm -rf $(OBJ_DIR)
