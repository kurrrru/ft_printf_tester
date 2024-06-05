/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:38:18 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 13:38:18 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	c_all(void)
{
	int		ret_printf[128];
	int		ret_ft_printf[128];
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	for (int i = 1; i < 128; i++)
		ret_printf[i] = printf("%c", (char)i);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	for (int i = 1; i < 128; i++)
		ret_ft_printf[i] = ft_printf("%c", (char)i);
	fclose(fp);
	flag = 1;
	for (int i = 1; i < 128; i++)
		flag &= (ret_printf[i] == ret_ft_printf[i]);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

// Bonus part

int	c_right_w5(void)
{
	int		ret_printf[128];
	int		ret_ft_printf[128];
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	for (int i = 1; i < 128; i++)
		ret_printf[i] = printf("[%5c]", (char)i);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	for (int i = 1; i < 128; i++)
		ret_ft_printf[i] = ft_printf("[%5c]", (char)i);
	fclose(fp);
	flag = 1;
	for (int i = 1; i < 128; i++)
		flag &= (ret_printf[i] == ret_ft_printf[i]);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	c_left_w5(void)
{
	int		ret_printf[128];
	int		ret_ft_printf[128];
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	for (int i = 1; i < 128; i++)
		ret_printf[i] = printf("[%-5c]", (char)i);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	for (int i = 1; i < 128; i++)
		ret_ft_printf[i] = ft_printf("[%-5c]", (char)i);
	fclose(fp);
	flag = 1;
	for (int i = 1; i < 128; i++)
		flag &= (ret_printf[i] == ret_ft_printf[i]);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}

int	c_right_w20(void)
{
	int		ret_printf[128];
	int		ret_ft_printf[128];
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	for (int i = 1; i < 128; i++)
		ret_printf[i] = printf("[%20c]", (char)i);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	for (int i = 1; i < 128; i++)
		ret_ft_printf[i] = ft_printf("[%20c]", (char)i);
	fclose(fp);
	flag = 1;
	for (int i = 1; i < 128; i++)
		flag &= (ret_printf[i] == ret_ft_printf[i]);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}
