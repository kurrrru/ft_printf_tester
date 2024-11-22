SRCS	=	$(wildcard src/*.c)
OBJS	=	$(SRCS:.c=.o)
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -fsanitize=address
EXEC	=	test

.DEFAULT_GOAL := all

mandatory: clean
	@echo "[mandatory test]"
	@echo "Compiling libftprintf.a..."
	@make -s -C ../ fclean
	@make -s -C ../ all
	@echo "Running mandatory test..."
	@$(CC) $(CFLAGS) -D MANDATORY $(SRCS) ../libftprintf.a -o $(EXEC)
	@./$(EXEC)


bonus: clean
	@echo "[bonus test]"
	@echo "Compiling libftprintf.a..."
	@make -s -C ../ fclean
	@make -s -C ../ bonus
	@echo "Running bonus test..."
	@$(CC) $(CFLAGS) -D BONUS $(SRCS) ../libftprintf.a -o $(EXEC)
	@./$(EXEC)

clean:
	@rm -f $(EXEC) $(OBJS)

fclean: clean

norm:
	find ../ -type f -name "*.c" ! -path "../ft_printf_tester/*" -exec norminette -R CheckForbiddenSourceHeader {} +
	find ../ -type f -name "*.h" ! -path "../ft_printf_tester/*" -exec norminette -R CheckDefine {} +

all: norm mandatory bonus

.PHONY: mandatory bonus clean fclean