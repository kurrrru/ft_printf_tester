SRCS	=	$(wildcard mandatory/*.c)
OBJS	=	$(SRCS:.c=.o)
EXEC	=	test

.DEFAULT_GOAL := all

echo:
	@echo "SRCS: $(SRCS)"

$(EXEC): $(SRCS)
	cc $(SRCS) -fsanitize=address ../libftprintf.a ../libft/libft.a -o test

run: $(EXEC)
	@echo "Running test..."
	@./$(EXEC)

clean:
	rm -f $(EXEC)

fclean: clean

re: fclean all

all: $(EXEC)

norm:
	norminette -R CheckForbiddenSourceHeader ../*.c ../libft/*.c ../src/*.c ../src_bonus/*.c
	norminette -R CheckDefine ../*.h ../libft/*.h
.PHONY: all clean fclean re run
