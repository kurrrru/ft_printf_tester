/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:32:46 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 14:32:46 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

static int	u_template(unsigned int u, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%u", u);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%u", u);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%u", u);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%u", u);
		printf("\n");
	}
	return (flag);
}

int	u_0(void)
{
	return (u_template(0, __func__));
}

int	u_1(void)
{
	return (u_template(1, __func__));
}

int	u_42(void)
{
	return (u_template(42, __func__));
}

int	u_123456(void)
{
	return (u_template(123456, __func__));
}

int	u_intmax(void)
{
	return (u_template(INT_MAX, __func__));
}

int	u_uintmax(void)
{
	return (u_template(UINT_MAX, __func__));
}

int	u_uintmax_minus_1(void)
{
	return (u_template(UINT_MAX - 1, __func__));
}

int	u_1_10_100_1000(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%u %u %u %u", 1, 10, 100, 1000);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%u %u %u %u", 1, 10, 100, 1000);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%u %u %u %u", 1, 10, 100, 1000);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%u %u %u %u", 1, 10, 100, 1000);
		printf("\n");
	}
	return (flag);
}

// Bonus part

static int	u_bonus_template(const char *format, unsigned int u, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf(format, u);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf(format, u);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf(format, u);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf(format, u);
		printf("\n");
	}
	return (flag);
}

/*
test functions to implement
int		u_42_left(void);
int		u_42_right_w5(void);
int		u_42_left_w5(void);
int		u_12345_right_p3(void);
int		u_12345_left_p3(void);
int		u_12345_right_p8(void);
int		u_12345_left_p8(void);
int		u_12345_right_w10_p8(void);
int		u_12345_left_w10_p8(void);
int		u_intmax_left_w30_p20(void);
int		u_uintmax_left_w30_p20(void);
int		u_0_right_w5_p3(void);
int		u_0_left_w5_p3(void);
*/

int	u_42_left(void)
{
	return (u_bonus_template("[%-u]", 42, __func__));
}

int	u_42_right_w5(void)
{
	return (u_bonus_template("[%5u]", 42, __func__));
}

int	u_42_left_w5(void)
{
	return (u_bonus_template("[%-5u]", 42, __func__));
}

int	u_12345_right_p3(void)
{
	return (u_bonus_template("[%.3u]", 12345, __func__));
}

int	u_12345_left_p3(void)
{
	return (u_bonus_template("[%-.3u]", 12345, __func__));
}

int	u_12345_right_p8(void)
{
	return (u_bonus_template("[%.8u]", 12345, __func__));
}

int	u_12345_left_p8(void)
{
	return (u_bonus_template("[%-.8u]", 12345, __func__));
}

int	u_12345_right_w10_p8(void)
{
	return (u_bonus_template("[%10.8u]", 12345, __func__));
}

int	u_12345_left_w10_p8(void)
{
	return (u_bonus_template("[%-10.8u]", 12345, __func__));
}

int	u_intmax_left_w30_p20(void)
{
	return (u_bonus_template("[%-30.20u]", INT_MAX, __func__));
}

int	u_uintmax_left_w30_p20(void)
{
	return (u_bonus_template("[%-30.20u]", UINT_MAX, __func__));
}

int	u_0_right_w5_p3(void)
{
	return (u_bonus_template("[%5.3u]", 0, __func__));
}

int	u_0_left_w5_p3(void)
{
	return (u_bonus_template("[%-5.3u]", 0, __func__));
}

int	u_42_right_zero_w8(void)
{
	return (u_bonus_template("[%08u]", 42, __func__));
}

int	u_42_left_zero_w8(void)
{
	return (u_bonus_template("[%-08u]", 42, __func__));
}

int	u_12345_right_zero_p3(void)
{
	return (u_bonus_template("[%03u]", 12345, __func__));
}

int	u_12345_left_zero_p3(void)
{
	return (u_bonus_template("[%-03u]", 12345, __func__));
}

int	u_12345_right_zero_p8(void)
{
	return (u_bonus_template("[%08u]", 12345, __func__));
}

int	u_12345_left_zero_p8(void)
{
	return (u_bonus_template("[%-08u]", 12345, __func__));
}
