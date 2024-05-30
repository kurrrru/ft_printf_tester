SRCS		=	$(wildcard mandatory/*.c)
SRCS_BONUS	=	$(wildcard bonus/*.c)
OBJS		=	$(SRCS:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)
EXEC		=	test_mandatory
EXEC_BONUS	=	test_bonus

.DEFAULT_GOAL := all

echo:
	@echo "SRCS: $(SRCS)"

$(EXEC): $(SRCS)
	cc $(SRCS) -fsanitize=address ../libftprintf.a ../libft/libft.a -o $(EXEC)

run: $(EXEC)
	@echo "Running mandatory test..."
	@./$(EXEC)

$(EXEC_BONUS): $(SRCS_BONUS)
	cc $(SRCS_BONUS) -fsanitize=address ../libftprintf.a ../libft/libft.a -o $(EXEC_BONUS)

run_bonus: $(EXEC_BONUS)
	@echo "Running bonus test..."
	@./$(EXEC_BONUS)

clean:
	rm -f $(EXEC) $(OBJS) $(EXEC_BONUS) $(OBJS_BONUS)

fclean: clean

re: fclean all

all: $(EXEC)

norm:
	norminette -R CheckForbiddenSourceHeader ../*.c ../libft/*.c ../src/*.c ../src_bonus/*.c
	norminette -R CheckDefine ../*.h ../libft/*.h
.PHONY: all clean fclean re run
