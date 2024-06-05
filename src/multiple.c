/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiple.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:57:32 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 14:57:32 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	multiple1(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%s %d %c %u %i", "Hello, world!", 214, 'a', 61430, -2643);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%s %d %c %u %i", "Hello, world!", 214, 'a', 61430, -2643);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%s %d %c %u %i", "Hello, world!", 214, 'a', 61430, -2643);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%s %d %c %u %i", "Hello, world!", 214, 'a', 61430, -2643);
		printf("\n");
	}
	return (flag);
}

int	multiple2(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("Today is %s. It is %u:%u:%u.", "June 2nd", 14, 57, 32);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("Today is %s. It is %u:%u:%u.", "June 2nd", 14, 57, 32);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("Today is %s. It is %u:%u:%u.", "June 2nd", 14, 57, 32);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("Today is %s. It is %u:%u:%u.", "June 2nd", 14, 57, 32);
		printf("\n");
	}
	return (flag);
}

int	multiple3(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%x, %X, and %p", 1313142, 214, &ret_printf);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%x, %X, and %p", 1313142, 214, &ret_printf);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%x, %X, and %p", 1313142, 214, &ret_printf);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%x, %X, and %p", 1313142, 214, &ret_printf);
		printf("\n");
	}
	return (flag);
}
