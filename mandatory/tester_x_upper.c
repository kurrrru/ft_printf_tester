/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_x_upper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:47:19 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/05/26 20:47:19 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_printf_x_upper_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", 42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", 42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_upper_0(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", 0);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", 0);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_upper_minus_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", -42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", -42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_upper_intmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", INT_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", INT_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_upper_intmin(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", INT_MIN);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", INT_MIN);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_upper_uintmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", UINT_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", UINT_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_upper_longmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", LONG_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", LONG_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_upper_longmin(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X", LONG_MIN);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X", LONG_MIN);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_x_upper_42_42_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%X %X %X", 42, 42, 42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%X %X %X", 42, 42, 42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}
