/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:49:25 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 14:49:25 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

static int	p_template(void *p, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%p", p);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%p", p);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%p", p);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%p", p);
		printf("\n");
	}
	return (flag);
}

int	p_0(void)
{
	return (p_template((void *)0, __func__));
}

int	p_1(void)
{
	return (p_template((void *)1, __func__));
}

int	p_42(void)
{
	return (p_template((void *)42, __func__));
}

int	p_123456(void)
{
	return (p_template((void *)123456, __func__));
}

int	p_null(void)
{
	return (p_template(NULL, __func__));
}

int	p_address(void)
{
	return (p_template(&p_address, __func__));
}

int	p_intmax(void)
{
	return (p_template((void *)INT_MAX, __func__));
}

int	p_uintmax(void)
{
	return (p_template((void *)UINT_MAX, __func__));
}

int	p_42_42_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%p %p %p", (void *)42, (void *)42, (void *)42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%p %p %p", (void *)42, (void *)42, (void *)42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%p %p %p", (void *)42, (void *)42, (void *)42);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%p %p %p", (void *)42, (void *)42, (void *)42);
		printf("\n");
	}
	return (flag);
}

// Bonus part
static int	p_bonus_template(const char *format, void *p, const char *func_name)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf(format, p);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf(format, p);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(func_name, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf(format, p);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf(format, p);
		printf("\n");
	}
	return (flag);
}

/*
test function to implement
int		p_42_left(void);
int		p_42_right_w5(void);
int		p_42_left_w5(void);
int		p_42_right_zero_w8(void);
int		p_42_left_zero_w8(void);
int		p_0_left(void);
int		p_0_right_w5(void);
int		p_0_left_w5(void);
*/

int	p_42_left(void)
{
	return (p_bonus_template("[%-p]", (void *)42, __func__));
}

int	p_42_right_w5(void)
{
	return (p_bonus_template("[%5p]", (void *)42, __func__));
}

int	p_42_left_w5(void)
{
	return (p_bonus_template("[%-5p]", (void *)42, __func__));
}

int	p_42_right_zero_w8(void)
{
	return (p_bonus_template("[%08p]", (void *)42, __func__));
}

int	p_42_left_zero_w8(void)
{
	return (p_bonus_template("[%-08p]", (void *)42, __func__));
}

int	p_0_left(void)
{
	return (p_bonus_template("[%-p]", (void *)0, __func__));
}

int	p_0_right_w5(void)
{
	return (p_bonus_template("[%5p]", (void *)0, __func__));
}

int	p_0_left_w5(void)
{
	return (p_bonus_template("[%-5p]", (void *)0, __func__));
}
