/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:43:52 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/05/26 20:43:52 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_printf_x_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x", 42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x", 42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_0(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x", 0);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x", 0);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_minus_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x", -42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x", -42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_intmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x", INT_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x", INT_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_intmin(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x", INT_MIN);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x", INT_MIN);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_uintmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x", UINT_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x", UINT_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_longmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x", LONG_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x", LONG_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_longmin(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x", LONG_MIN);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x", LONG_MIN);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_42_42_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x %x %x", 42, 42, 42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x %x %x", 42, 42, 42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}
