SRCS	=	main.c tester.c tester_c.c tester_s.c tester_p.c tester_d.c tester_i.c tester_u.c tester_x.c tester_x_upper.c tester_percent.c tester_multiple.c
OBJS	=	$(SRCS:.c=.o)
EXEC	=	test

.DEFAULT_GOAL := all

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
	norminette -R CheckForbiddenSourceHeader ../*.c ../libft/*.c ../src/*.c
	norminette -R CheckDefine ../*.h ../libft/*.h
.PHONY: all clean fclean re run
