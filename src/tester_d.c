/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:10:42 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 14:10:42 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

static int	d_template(int d, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%d", d);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%d", d);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%d", d);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%d", d);
		printf("\n");
	}
	return (flag);
}

int	d_0(void)
{
	return (d_template(0, __func__));
}

int	d_1(void)
{
	return (d_template(1, __func__));
}

int	d_minus_1(void)
{
	return (d_template(-1, __func__));
}

int	d_42(void)
{
	return (d_template(42, __func__));
}

int	d_minus_42(void)
{
	return (d_template(-42, __func__));
}

int	d_424242(void)
{
	return (d_template(424242, __func__));
}

int	d_intmax(void)
{
	return (d_template(INT_MAX, __func__));
}

int	d_intmax_minus_1(void)
{
	return (d_template(INT_MAX - 1, __func__));
}

int	d_intmin(void)
{
	return (d_template(INT_MIN, __func__));
}

int	d_intmin_plus_1(void)
{
	return (d_template(INT_MIN + 1, __func__));
}

int	d_42_42_42(void)
{
	int	ret_printf;
	int	ret_ft_printf;
	int	flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%d %d %d", 42, 42, 42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%d %d %d", 42, 42, 42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%d %d %d", 42, 42, 42);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%d %d %d", 42, 42, 42);
		printf("\n");
	}
	return (flag);
}

// Bonus part

static int	d_bonus_template(const char *format, int d, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf(format, d);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf(format, d);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf(format, d);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf(format, d);
		printf("\n");
	}
	return (flag);
}

/*
list of test functions to implement:
int		d_42_left(void);
int		d_42_right_w5(void);
int		d_42_left_w5(void);
int		d_12345_right_p3(void);
int		d_12345_left_p3(void);
int		d_12345_right_p8(void);
int		d_12345_left_p8(void);
int		d_12345_right_w10_p8(void);
int		d_12345_left_w10_p8(void);
int		d_minus_42_left(void);
int		d_minus_42_right_w5(void);
int		d_minus_42_left_w5(void);
int		d_minus_12345_right_p3(void);
int		d_minus_12345_left_p3(void);
int		d_minus_12345_right_p8(void);
int		d_minus_12345_left_p8(void);
int		d_minus_12345_right_w10_p8(void);
int		d_minus_12345_left_w10_p8(void);
int		d_42_right_zero_w8(void);
int		d_42_left_zero_w8(void);
int		d_12345_right_zero_p3(void);
int		d_12345_left_zero_p3(void);
int		d_12345_right_zero_p8(void);
int		d_12345_left_zero_p8(void);
int		d_42_right_plus(void);
int		d_42_left_plus(void);
int		d_42_right_space(void);
int		d_42_left_space(void);
int		d_42_right_plus_w10(void);
int		d_42_left_plus_w10(void);
int		d_42_right_space_w10(void);
int		d_42_left_space_w10(void);
int		d_42_right_plus_zero_w10(void);
int		d_42_left_plus_zero_w10(void);
int		d_42_right_space_zero_w10(void);
int		d_42_left_space_zero_w10(void);
int		d_42_right_plus_p8(void);
int		d_42_left_plus_p8(void);
int		d_42_right_space_p8(void);
int		d_42_left_space_p8(void);
int		d_minus_42_right_zero_w8(void);
int		d_minus_42_left_zero_w8(void);
int		d_minus_12345_right_zero_p3(void);
int		d_minus_12345_left_zero_p3(void);
int		d_minus_12345_right_zero_p8(void);
int		d_minus_12345_left_zero_p8(void);
int		d_minus_42_right_plus(void);
int		d_minus_42_left_plus(void);
int		d_minus_42_right_space(void);
int		d_minus_42_left_space(void);
int		d_minus_42_right_plus_w10(void);
int		d_minus_42_left_plus_w10(void);
int		d_minus_42_right_space_w10(void);
int		d_minus_42_left_space_w10(void);
int		d_minus_42_right_plus_zero_w10(void);
int		d_minus_42_left_plus_zero_w10(void);
int		d_minus_42_right_space_zero_w10(void);
int		d_minus_42_left_space_zero_w10(void);
int		d_minus_42_right_plus_p8(void);
int		d_minus_42_left_plus_p8(void);
int		d_minus_42_right_space_p8(void);
int		d_minus_42_left_space_p8(void);
int		d_intmax_left_plus_w30_p20(void);
int		d_intmax_left_space_w30_p20(void);
int		d_intmin_left_plus_w30_p20(void);
int		d_intmin_left_space_w30_p20(void);
*/

int	d_42_left(void)
{
	return (d_bonus_template("[%-d]", 42, __func__));
}

int	d_42_right_w5(void)
{
	return (d_bonus_template("[%5d]", 42, __func__));
}

int	d_42_left_w5(void)
{
	return (d_bonus_template("[%-5d]", 42, __func__));
}

int	d_12345_right_p3(void)
{
	return (d_bonus_template("[%.3d]", 12345, __func__));
}

int	d_12345_left_p3(void)
{
	return (d_bonus_template("[%-.3d]", 12345, __func__));
}

int	d_12345_right_p8(void)
{
	return (d_bonus_template("[%.8d]", 12345, __func__));
}

int	d_12345_left_p8(void)
{
	return (d_bonus_template("[%-.8d]", 12345, __func__));
}

int	d_12345_right_w10_p8(void)
{
	return (d_bonus_template("[%10.8d]", 12345, __func__));
}

int	d_12345_left_w10_p8(void)
{
	return (d_bonus_template("[%-10.8d]", 12345, __func__));
}

int	d_minus_42_left(void)
{
	return (d_bonus_template("[%-d]", -42, __func__));
}

int	d_minus_42_right_w5(void)
{
	return (d_bonus_template("[%5d]", -42, __func__));
}

int	d_minus_42_left_w5(void)
{
	return (d_bonus_template("[%-5d]", -42, __func__));
}

int	d_minus_12345_right_p3(void)
{
	return (d_bonus_template("[%.3d]", -12345, __func__));
}

int	d_minus_12345_left_p3(void)
{
	return (d_bonus_template("[%-.3d]", -12345, __func__));
}

int	d_minus_12345_right_p8(void)
{
	return (d_bonus_template("[%.8d]", -12345, __func__));
}

int	d_minus_12345_left_p8(void)
{
	return (d_bonus_template("[%-.8d]", -12345, __func__));
}

int	d_minus_12345_right_w10_p8(void)
{
	return (d_bonus_template("[%10.8d]", -12345, __func__));
}

int	d_minus_12345_left_w10_p8(void)
{
	return (d_bonus_template("[%-10.8d]", -12345, __func__));
}

int	d_42_right_zero_w8(void)
{
	return (d_bonus_template("[%08d]", 42, __func__));
}

int	d_42_left_zero_w8(void)
{
	return (d_bonus_template("[%-08d]", 42, __func__));
}

int	d_12345_right_zero_p3(void)
{
	return (d_bonus_template("[%0.3d]", 12345, __func__));
}

int	d_12345_left_zero_p3(void)
{
	return (d_bonus_template("[%-0.3d]", 12345, __func__));
}

int	d_12345_right_zero_p8(void)
{
	return (d_bonus_template("[%0.8d]", 12345, __func__));
}

int	d_12345_left_zero_p8(void)
{
	return (d_bonus_template("[%-0.8d]", 12345, __func__));
}

int	d_42_right_plus(void)
{
	return (d_bonus_template("[%+d]", 42, __func__));
}

int	d_42_left_plus(void)
{
	return (d_bonus_template("[%-+d]", 42, __func__));
}

int	d_42_right_space(void)
{
	return (d_bonus_template("[% d]", 42, __func__));
}

int	d_42_left_space(void)
{
	return (d_bonus_template("[%- d]", 42, __func__));
}

int	d_42_right_plus_w10(void)
{
	return (d_bonus_template("[%+10d]", 42, __func__));
}

int	d_42_left_plus_w10(void)
{
	return (d_bonus_template("[%-+10d]", 42, __func__));
}

int	d_42_right_space_w10(void)
{
	return (d_bonus_template("[% 10d]", 42, __func__));
}

int	d_42_left_space_w10(void)
{
	return (d_bonus_template("[%- 10d]", 42, __func__));
}

int	d_42_right_plus_zero_w10(void)
{
	return (d_bonus_template("[%+010d]", 42, __func__));
}

int	d_42_left_plus_zero_w10(void)
{
	return (d_bonus_template("[%-+010d]", 42, __func__));
}

int	d_42_right_space_zero_w10(void)
{
	return (d_bonus_template("[% 010d]", 42, __func__));
}

int	d_42_left_space_zero_w10(void)
{
	return (d_bonus_template("[%- 010d]", 42, __func__));
}

int	d_42_right_plus_p8(void)
{
	return (d_bonus_template("[%+.8d]", 42, __func__));
}

int	d_42_left_plus_p8(void)
{
	return (d_bonus_template("[%-+.8d]", 42, __func__));
}

int	d_42_right_space_p8(void)
{
	return (d_bonus_template("[% .8d]", 42, __func__));
}

int	d_42_left_space_p8(void)
{
	return (d_bonus_template("[%- .8d]", 42, __func__));
}

int	d_minus_42_right_zero_w8(void)
{
	return (d_bonus_template("[%08d]", -42, __func__));
}

int	d_minus_42_left_zero_w8(void)
{
	return (d_bonus_template("[%-08d]", -42, __func__));
}

int	d_minus_12345_right_zero_p3(void)
{
	return (d_bonus_template("[%0.3d]", -12345, __func__));
}

int	d_minus_12345_left_zero_p3(void)
{
	return (d_bonus_template("[%-0.3d]", -12345, __func__));
}

int	d_minus_12345_right_zero_p8(void)
{
	return (d_bonus_template("[%0.8d]", -12345, __func__));
}

int	d_minus_12345_left_zero_p8(void)
{
	return (d_bonus_template("[%-0.8d]", -12345, __func__));
}

int	d_minus_42_right_plus(void)
{
	return (d_bonus_template("[%+d]", -42, __func__));
}

int	d_minus_42_left_plus(void)
{
	return (d_bonus_template("[%-+d]", -42, __func__));
}

int	d_minus_42_right_space(void)
{
	return (d_bonus_template("[% d]", -42, __func__));
}

int	d_minus_42_left_space(void)
{
	return (d_bonus_template("[%- d]", -42, __func__));
}

int	d_minus_42_right_plus_w10(void)
{
	return (d_bonus_template("[%+10d]", -42, __func__));
}

int	d_minus_42_left_plus_w10(void)
{
	return (d_bonus_template("[%-+10d]", -42, __func__));
}

int	d_minus_42_right_space_w10(void)
{
	return (d_bonus_template("[% 10d]", -42, __func__));
}

int	d_minus_42_left_space_w10(void)
{
	return (d_bonus_template("[%- 10d]", -42, __func__));
}

int	d_minus_42_right_plus_zero_w10(void)
{
	return (d_bonus_template("[%+010d]", -42, __func__));
}

int	d_minus_42_left_plus_zero_w10(void)
{
	return (d_bonus_template("[%-+010d]", -42, __func__));
}

int	d_minus_42_right_space_zero_w10(void)
{
	return (d_bonus_template("[% 010d]", -42, __func__));
}	

int	d_minus_42_left_space_zero_w10(void)
{
	return (d_bonus_template("[%- 010d]", -42, __func__));
}

int	d_minus_42_right_plus_p8(void)
{
	return (d_bonus_template("[%+.8d]", -42, __func__));
}

int	d_minus_42_left_plus_p8(void)
{
	return (d_bonus_template("[%-+.8d]", -42, __func__));
}

int	d_minus_42_right_space_p8(void)
{
	return (d_bonus_template("[% .8d]", -42, __func__));
}

int	d_minus_42_left_space_p8(void)
{
	return (d_bonus_template("[%- .8d]", -42, __func__));
}

int	d_intmax_left_plus_w30_p20(void)
{
	return (d_bonus_template("[%-+30.20d]", INT_MAX, __func__));
}

int	d_intmax_left_space_w30_p20(void)
{
	return (d_bonus_template("[%- 30.20d]", INT_MAX, __func__));
}

int	d_intmin_left_plus_w30_p20(void)
{
	return (d_bonus_template("[%-+30.20d]", INT_MIN, __func__));
}

int	d_intmin_left_space_w30_p20(void)
{
	return (d_bonus_template("[%- 30.20d]", INT_MIN, __func__));
}

int	d_0_plus(void)
{
	return (d_bonus_template("[%+d]", 0, __func__));
}

int	d_0_space(void)
{
	return (d_bonus_template("[% d]", 0, __func__));
}

int	d_0_plus_w10(void)
{
	return (d_bonus_template("[%+10d]", 0, __func__));
}

int	d_0_space_w10(void)
{
	return (d_bonus_template("[% 10d]", 0, __func__));
}
