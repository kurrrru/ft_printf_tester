/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:28:51 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 14:28:51 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

static int	i_template(int i, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", i);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", i);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%i", i);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%i", i);
		printf("\n");
	}
	return (flag);
}

int	i_0(void)
{
	return (i_template(0, __func__));
}

int	i_1(void)
{
	return (i_template(1, __func__));
}

int	i_minus_1(void)
{
	return (i_template(-1, __func__));
}

int	i_42(void)
{
	return (i_template(42, __func__));
}

int	i_minus_42(void)
{
	return (i_template(-42, __func__));
}

int	i_424242(void)
{
	return (i_template(424242, __func__));
}

int	i_intmax(void)
{
	return (i_template(INT_MAX, __func__));
}

int	i_intmax_minus_1(void)
{
	return (i_template(INT_MAX - 1, __func__));
}

int	i_intmin(void)
{
	return (i_template(INT_MIN, __func__));
}

int	i_intmin_plus_1(void)
{
	return (i_template(INT_MIN + 1, __func__));
}

int	i_42_42_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i %i %i", 42, 42, 42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i %i %i", 42, 42, 42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%i %i %i", 42, 42, 42);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%i %i %i", 42, 42, 42);
		printf("\n");
	}
	return (flag);
}

// Bonus part
static int	i_bonus_template(const char *format, int i, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf(format, i);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf(format, i);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf(format, i);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf(format, i);
		printf("\n");
	}
	return (flag);
}

/*
// %i bonus part
int i_42_left(void);
int i_42_right_w5(void);
int i_42_left_w5(void);
int i_12345_right_p3(void);
int i_12345_left_p3(void);
int i_12345_right_p8(void);
int i_12345_left_p8(void);
int i_12345_right_w10_p8(void);
int i_12345_left_w10_p8(void);
int i_minus_42_left(void);
int i_minus_42_right_w5(void);
int i_minus_42_left_w5(void);
int i_minus_12345_right_p3(void);
int i_minus_12345_left_p3(void);
int i_minus_12345_right_p8(void);
int i_minus_12345_left_p8(void);
int i_minus_12345_right_w10_p8(void);
int i_minus_12345_left_w10_p8(void);
int i_42_right_zero_w8(void);
int i_42_left_zero_w8(void);
int i_12345_right_zero_p3(void);
int i_12345_left_zero_p3(void);
int i_12345_right_zero_p8(void);
int i_12345_left_zero_p8(void);
int i_42_right_plus(void);
int i_42_left_plus(void);
int i_42_right_space(void);
int i_42_left_space(void);
int i_42_right_plus_w10(void);
int i_42_left_plus_w10(void);
int i_42_right_space_w10(void);
int i_42_left_space_w10(void);
int i_42_right_plus_zero_w10(void);
int i_42_left_plus_zero_w10(void);
int i_42_right_space_zero_w10(void);
int i_42_left_space_zero_w10(void);
int i_42_right_plus_p8(void);
int i_42_left_plus_p8(void);
int i_42_right_space_p8(void);
int i_42_left_space_p8(void);
int i_minus_42_right_zero_w8(void);
int i_minus_42_left_zero_w8(void);
int i_minus_12345_right_zero_p3(void);
int i_minus_12345_left_zero_p3(void);
int i_minus_12345_right_zero_p8(void);
int i_minus_12345_left_zero_p8(void);
int i_minus_42_right_plus(void);
int i_minus_42_left_plus(void);
int i_minus_42_right_space(void);
int i_minus_42_left_space(void);
int i_minus_42_right_plus_w10(void);
int i_minus_42_left_plus_w10(void);
int i_minus_42_right_space_w10(void);
int i_minus_42_left_space_w10(void);
int i_minus_42_right_plus_zero_w10(void);
int i_minus_42_left_plus_zero_w10(void);
int i_minus_42_right_space_zero_w10(void);
int i_minus_42_left_space_zero_w10(void);
int i_minus_42_right_plus_p8(void);
int i_minus_42_left_plus_p8(void);
int i_minus_42_right_space_p8(void);
int i_minus_42_left_space_p8(void);
int i_intmax_left_plus_w30_p20(void);
int i_intmax_left_space_w30_p20(void);
int i_intmin_left_plus_w30_p20(void);
int i_intmin_left_space_w30_p20(void);
*/

int	i_42_left(void)
{
	return (i_bonus_template("[%-i]", 42, __func__));
}

int	i_42_right_w5(void)
{
	return (i_bonus_template("[%5i]", 42, __func__));
}

int	i_42_left_w5(void)
{
	return (i_bonus_template("[%-5i]", 42, __func__));
}

int	i_12345_right_p3(void)
{
	return (i_bonus_template("[%+.3i]", 12345, __func__));
}

int	i_12345_left_p3(void)
{
	return (i_bonus_template("[%-+.3i]", 12345, __func__));
}

int	i_12345_right_p8(void)
{
	return (i_bonus_template("[%+.8i]", 12345, __func__));
}

int	i_12345_left_p8(void)
{
	return (i_bonus_template("[%-+.8i]", 12345, __func__));
}

int	i_12345_right_w10_p8(void)
{
	return (i_bonus_template("[%10.8i]", 12345, __func__));
}

int	i_12345_left_w10_p8(void)
{
	return (i_bonus_template("[%-10.8i]", 12345, __func__));
}

int	i_minus_42_left(void)
{
	return (i_bonus_template("[%-i]", -42, __func__));
}

int	i_minus_42_right_w5(void)
{
	return (i_bonus_template("[%5i]", -42, __func__));
}

int	i_minus_42_left_w5(void)
{
	return (i_bonus_template("[%-5i]", -42, __func__));
}

int	i_minus_12345_right_p3(void)
{
	return (i_bonus_template("[%+.3i]", -12345, __func__));
}

int	i_minus_12345_left_p3(void)
{
	return (i_bonus_template("[%-+.3i]", -12345, __func__));
}

int	i_minus_12345_right_p8(void)
{
	return (i_bonus_template("[%+.8i]", -12345, __func__));
}

int	i_minus_12345_left_p8(void)
{
	return (i_bonus_template("[%-+.8i]", -12345, __func__));
}

int	i_minus_12345_right_w10_p8(void)
{
	return (i_bonus_template("[%10.8i]", -12345, __func__));
}

int	i_minus_12345_left_w10_p8(void)
{
	return (i_bonus_template("[%-10.8i]", -12345, __func__));
}

int	i_42_right_zero_w8(void)
{
	return (i_bonus_template("[%08i]", 42, __func__));
}

int	i_42_left_zero_w8(void)
{
	return (i_bonus_template("[%-08i]", 42, __func__));
}

int	i_12345_right_zero_p3(void)
{
	return (i_bonus_template("[%0+.3i]", 12345, __func__));
}

int	i_12345_left_zero_p3(void)
{
	return (i_bonus_template("[%-0+.3i]", 12345, __func__));
}

int	i_12345_right_zero_p8(void)
{
	return (i_bonus_template("[%0+.8i]", 12345, __func__));
}

int	i_12345_left_zero_p8(void)
{
	return (i_bonus_template("[%-0+.8i]", 12345, __func__));
}

int	i_42_right_plus(void)
{
	return (i_bonus_template("[%+i]", 42, __func__));
}

int	i_42_left_plus(void)
{
	return (i_bonus_template("[%-+i]", 42, __func__));
}

int	i_42_right_space(void)
{
	return (i_bonus_template("[% i]", 42, __func__));
}

int	i_42_left_space(void)
{
	return (i_bonus_template("[%- i]", 42, __func__));
}

int	i_42_right_plus_w10(void)
{
	return (i_bonus_template("[%+10i]", 42, __func__));
}

int	i_42_left_plus_w10(void)
{
	return (i_bonus_template("[%-+10i]", 42, __func__));
}

int	i_42_right_space_w10(void)
{
	return (i_bonus_template("[% 10i]", 42, __func__));
}

int	i_42_left_space_w10(void)
{
	return (i_bonus_template("[%- 10i]", 42, __func__));
}

int	i_42_right_plus_zero_w10(void)
{
	return (i_bonus_template("[%+010i]", 42, __func__));
}

int	i_42_left_plus_zero_w10(void)
{
	return (i_bonus_template("[%-+010i]", 42, __func__));
}

int	i_42_right_space_zero_w10(void)
{
	return (i_bonus_template("[% 010i]", 42, __func__));
}

int	i_42_left_space_zero_w10(void)
{
	return (i_bonus_template("[%- 010i]", 42, __func__));
}

int	i_42_right_plus_p8(void)
{
	return (i_bonus_template("[%+.8i]", 42, __func__));
}

int	i_42_left_plus_p8(void)
{
	return (i_bonus_template("[%-+.8i]", 42, __func__));
}

int	i_42_right_space_p8(void)
{
	return (i_bonus_template("[% .8i]", 42, __func__));
}

int	i_42_left_space_p8(void)
{
	return (i_bonus_template("[%- .8i]", 42, __func__));
}

int	i_minus_42_right_zero_w8(void)
{
	return (i_bonus_template("[%08i]", -42, __func__));
}

int	i_minus_42_left_zero_w8(void)
{
	return (i_bonus_template("[%-08i]", -42, __func__));
}

int	i_minus_12345_right_zero_p3(void)
{
	return (i_bonus_template("[%0+.3i]", -12345, __func__));
}

int	i_minus_12345_left_zero_p3(void)
{
	return (i_bonus_template("[%-0+.3i]", -12345, __func__));
}

int	i_minus_12345_right_zero_p8(void)
{
	return (i_bonus_template("[%0+.8i]", -12345, __func__));
}

int	i_minus_12345_left_zero_p8(void)
{
	return (i_bonus_template("[%-0+.8i]", -12345, __func__));
}

int	i_minus_42_right_plus(void)
{
	return (i_bonus_template("[%+i]", -42, __func__));
}

int	i_minus_42_left_plus(void)
{
	return (i_bonus_template("[%-+i]", -42, __func__));
}

int	i_minus_42_right_space(void)
{
	return (i_bonus_template("[% i]", -42, __func__));
}

int	i_minus_42_left_space(void)
{
	return (i_bonus_template("[%- i]", -42, __func__));
}

int	i_minus_42_right_plus_w10(void)
{
	return (i_bonus_template("[%+10i]", -42, __func__));
}

int	i_minus_42_left_plus_w10(void)
{
	return (i_bonus_template("[%-+10i]", -42, __func__));
}

int	i_minus_42_right_space_w10(void)
{
	return (i_bonus_template("[% 10i]", -42, __func__));
}

int	i_minus_42_left_space_w10(void)
{
	return (i_bonus_template("[%- 10i]", -42, __func__));
}

int	i_minus_42_right_plus_zero_w10(void)
{
	return (i_bonus_template("[%+010i]", -42, __func__));
}

int	i_minus_42_left_plus_zero_w10(void)
{
	return (i_bonus_template("[%-+010i]", -42, __func__));
}

int	i_minus_42_right_space_zero_w10(void)
{
	return (i_bonus_template("[% 010i]", -42, __func__));
}

int	i_minus_42_left_space_zero_w10(void)
{
	return (i_bonus_template("[%- 010i]", -42, __func__));
}

int	i_minus_42_right_plus_p8(void)
{
	return (i_bonus_template("[%+.8i]", -42, __func__));
}

int	i_minus_42_left_plus_p8(void)
{
	return (i_bonus_template("[%-+.8i]", -42, __func__));
}

int	i_minus_42_right_space_p8(void)
{
	return (i_bonus_template("[% .8i]", -42, __func__));
}

int	i_minus_42_left_space_p8(void)
{
	return (i_bonus_template("[%- .8i]", -42, __func__));
}

int	i_intmax_left_plus_w30_p20(void)
{
	return (i_bonus_template("[%-+30.20i]", INT_MAX, __func__));
}

int	i_intmax_left_space_w30_p20(void)
{
	return (i_bonus_template("[%- 30.20i]", INT_MAX, __func__));
}

int	i_intmin_left_plus_w30_p20(void)
{
	return (i_bonus_template("[%-+30.20i]", INT_MIN, __func__));
}

int	i_intmin_left_space_w30_p20(void)
{
	return (i_bonus_template("[%- 30.20i]", INT_MIN, __func__));
}

int	i_0_plus(void)
{
	return (i_bonus_template("[%+i]", 0, __func__));
}

int	i_0_space(void)
{
	return (i_bonus_template("[% i]", 0, __func__));
}

int	i_0_plus_w10(void)
{
	return (i_bonus_template("[%+10i]", 0, __func__));
}

int	i_0_space_w10(void)
{
	return (i_bonus_template("[% 10i]", 0, __func__));
}
