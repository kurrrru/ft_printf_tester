/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_x_upper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:41:52 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 14:41:52 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

static int	x_upper_template(unsigned int x, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", x);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", x);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%X", x);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%X", x);
		printf("\n");
	}
	return (flag);
}

int	x_upper_0(void)
{
	return (x_upper_template(0, __func__));
}

int	x_upper_1(void)
{
	return (x_upper_template(1, __func__));
}

int	x_upper_42(void)
{
	return (x_upper_template(42, __func__));
}

int	x_upper_123456(void)
{
	return (x_upper_template(123456, __func__));
}

int	x_upper_intmax(void)
{
	return (x_upper_template(INT_MAX, __func__));
}

int	x_upper_uintmax(void)
{
	return (x_upper_template(UINT_MAX, __func__));
}

int	x_upper_uintmax_minus_1(void)
{
	return (x_upper_template(UINT_MAX - 1, __func__));
}

int	x_upper_1_10_100_1000(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X %X %X %X", 1, 10, 100, 1000);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X %X %X %X", 1, 10, 100, 1000);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%X %X %X %X", 1, 10, 100, 1000);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%X %X %X %X", 1, 10, 100, 1000);
		printf("\n");
	}
	return (flag);
}

// Bonus part
static int x_upper_bonus_template(const char *format, unsigned int x, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf(format, x);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf(format, x);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf(format, x);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf(format, x);
		printf("\n");
	}
	return (flag);
}

/*
test functions to implement
int		x_upper_42_left(void);
int		x_upper_42_right_w5(void);
int		x_upper_42_left_w5(void);
int		x_upper_12345_right_p3(void);
int		x_upper_12345_left_p3(void);
int		x_upper_12345_right_p8(void);
int		x_upper_12345_left_p8(void);
int		x_upper_12345_right_w10_p8(void);
int		x_upper_12345_left_w10_p8(void);
int		x_upper_intmax_left_w30_p20(void);
int		x_upper_uintmax_left_w30_p20(void);
int		x_upper_0_right_w5_p3(void);
int		x_upper_0_left_w5_p3(void);
int		x_upper_42_hash_right(void);
int		x_upper_42_hash_left(void);
int		x_upper_42_hash_right_w5(void);
int		x_upper_42_hash_left_w5(void);
int		x_upper_12345_hash_right_p3(void);
int		x_upper_12345_hash_left_p3(void);
int		x_upper_12345_hash_right_p8(void);
int		x_upper_12345_hash_left_p8(void);
int		x_upper_12345_hash_right_w10_p8(void);
int		x_upper_12345_hash_left_w10_p8(void);
int		x_upper_intmax_hash_left_w30_p20(void);
int		x_upper_uintmax_hash_left_w30_p20(void);
int		x_upper_0_hash_right_w5_p3(void);
int		x_upper_0_hash_left_w5_p3(void);
int		x_upper_42_right_zero_w8(void);
int		x_upper_42_left_zero_w8(void);
int		x_upper_12345_right_zero_p3(void);
int		x_upper_12345_left_zero_p3(void);
int		x_upper_12345_right_zero_p8(void);
int		x_upper_12345_left_zero_p8(void);
int		x_upper_42_hash_right_zero_w8(void);
int		x_upper_42_hash_left_zero_w8(void);
int		x_upper_12345_hash_right_zero_p3(void);
int		x_upper_12345_hash_left_zero_p3(void);
int		x_upper_12345_hash_right_zero_p8(void);
int		x_upper_12345_hash_left_zero_p8(void);
*/

int	x_upper_42_left(void)
{
	return (x_upper_bonus_template("[%-X]", 42, __func__));
}

int	x_upper_42_right_w5(void)
{
	return (x_upper_bonus_template("[%5X]", 42, __func__));
}

int	x_upper_42_left_w5(void)
{
	return (x_upper_bonus_template("[%-5X]", 42, __func__));
}

int	x_upper_12345_right_p3(void)
{
	return (x_upper_bonus_template("[%.3X]", 12345, __func__));
}

int	x_upper_12345_left_p3(void)
{
	return (x_upper_bonus_template("[%-.3X]", 12345, __func__));
}

int	x_upper_12345_right_p8(void)
{
	return (x_upper_bonus_template("[%.8X]", 12345, __func__));
}

int	x_upper_12345_left_p8(void)
{
	return (x_upper_bonus_template("[%-.8X]", 12345, __func__));
}

int	x_upper_12345_right_w10_p8(void)
{
	return (x_upper_bonus_template("[%10.8X]", 12345, __func__));
}

int	x_upper_12345_left_w10_p8(void)
{
	return (x_upper_bonus_template("[%-10.8X]", 12345, __func__));
}

int	x_upper_intmax_left_w30_p20(void)
{
	return (x_upper_bonus_template("[%-30.20X]", INT_MAX, __func__));
}


int	x_upper_uintmax_left_w30_p20(void)
{
	return (x_upper_bonus_template("[%-30.20X]", UINT_MAX, __func__));
}

int	x_upper_0_right_w5_p3(void)
{
	return (x_upper_bonus_template("[%5.3X]", 0, __func__));
}

int	x_upper_0_left_w5_p3(void)
{
	return (x_upper_bonus_template("[%-5.3X]", 0, __func__));
}

int	x_upper_42_hash_right(void)
{
	return (x_upper_bonus_template("[%#X]", 42, __func__));
}

int	x_upper_42_hash_left(void)
{
	return (x_upper_bonus_template("[%-#X]", 42, __func__));
}

int	x_upper_42_hash_right_w5(void)
{
	return (x_upper_bonus_template("[%#5X]", 42, __func__));
}

int	x_upper_42_hash_left_w5(void)
{
	return (x_upper_bonus_template("[%-#5X]", 42, __func__));
}

int	x_upper_12345_hash_right_p3(void)
{
	return (x_upper_bonus_template("[%#.3X]", 12345, __func__));
}

int	x_upper_12345_hash_left_p3(void)
{
	return (x_upper_bonus_template("[%-#.3X]", 12345, __func__));
}

int	x_upper_12345_hash_right_p8(void)
{
	return (x_upper_bonus_template("[%#.8X]", 12345, __func__));
}

int	x_upper_12345_hash_left_p8(void)
{
	return (x_upper_bonus_template("[%#-.8X]", 12345, __func__));
}

int	x_upper_12345_hash_right_w10_p8(void)
{
	return (x_upper_bonus_template("[%#10.8X]", 12345, __func__));
}

int	x_upper_12345_hash_left_w10_p8(void)
{
	return (x_upper_bonus_template("[%-#10.8X]", 12345, __func__));
}

int	x_upper_intmax_hash_left_w30_p20(void)
{
	return (x_upper_bonus_template("[%-#30.20X]", INT_MAX, __func__));
}

int	x_upper_uintmax_hash_left_w30_p20(void)
{
	return (x_upper_bonus_template("[%-#30.20X]", UINT_MAX, __func__));
}

int	x_upper_0_hash_right_w5_p3(void)
{
	return (x_upper_bonus_template("[%#5.3X]", 0, __func__));
}

int	x_upper_0_hash_left_w5_p3(void)
{
	return (x_upper_bonus_template("[%-#5.3X]", 0, __func__));
}

int	x_upper_42_right_zero_w8(void)
{
	return (x_upper_bonus_template("[%08X]", 42, __func__));
}

int	x_upper_42_left_zero_w8(void)
{
	return (x_upper_bonus_template("[%-08X]", 42, __func__));
}

int	x_upper_12345_right_zero_p3(void)
{
	return (x_upper_bonus_template("[%0.3X]", 12345, __func__));
}

int	x_upper_12345_left_zero_p3(void)
{
	return (x_upper_bonus_template("[%-0.3X]", 12345, __func__));
}

int	x_upper_12345_right_zero_p8(void)
{
	return (x_upper_bonus_template("[%0.8X]", 12345, __func__));
}

int	x_upper_12345_left_zero_p8(void)
{
	return (x_upper_bonus_template("[%-0.8X]", 12345, __func__));
}

int	x_upper_42_hash_right_zero_w8(void)
{
	return (x_upper_bonus_template("[%#08X]", 42, __func__));
}

int	x_upper_42_hash_left_zero_w8(void)
{
	return (x_upper_bonus_template("[%-#08X]", 42, __func__));
}

int	x_upper_12345_hash_right_zero_p3(void)
{
	return (x_upper_bonus_template("[%#0.3X]", 12345, __func__));
}

int	x_upper_12345_hash_left_zero_p3(void)
{
	return (x_upper_bonus_template("[%-#0.3X]", 12345, __func__));
}

int	x_upper_12345_hash_right_zero_p8(void)
{
	return (x_upper_bonus_template("[%#0.8X]", 12345, __func__));
}

int	x_upper_12345_hash_left_zero_p8(void)
{
	return (x_upper_bonus_template("[%-#0.8X]", 12345, __func__));
}
