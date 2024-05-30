/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:23:10 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/05/26 18:23:10 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_printf_i_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", 42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", 42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_minus_42(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", -42);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", -42);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_0(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", 0);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", 0);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_intmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", INT_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", INT_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_intmin(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", INT_MIN);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", INT_MIN);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_intmax_plus_1(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", INT_MAX + 1);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", INT_MAX + 1);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_intmax_minus_1(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", INT_MAX - 1);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", INT_MAX - 1);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_intmin_plus_1(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", INT_MIN + 1);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", INT_MIN + 1);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_intmin_minus_1(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", INT_MIN - 1);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", INT_MIN - 1);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_42_42_42(void)
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
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_uintmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", UINT_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", UINT_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_longmax(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", LONG_MAX);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", LONG_MAX);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	test_printf_i_longmin(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%i", LONG_MIN);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%i", LONG_MIN);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}
