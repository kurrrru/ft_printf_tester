/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:12:50 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 16:12:50 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	percent(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%%");
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%%");
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%%");
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%%");
		printf("\n");
	}
	return (flag);
}

int	percent_percent(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%%%%");
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%%%%");
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%%%%");
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%%%%");
		printf("\n");
	}
	return (flag);
}
