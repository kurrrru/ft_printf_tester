/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_multiple.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:42:03 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/05/26 22:42:03 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_printf_multiple(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%s %d %c %x %X %p", "Hello, world", 42, '!', 42, 42, "Hello, world");
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%s %d %c %x %X %p", "Hello, world", 42, '!', 42, 42, "Hello, world");
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}
