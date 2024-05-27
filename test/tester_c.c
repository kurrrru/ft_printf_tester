/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:42:10 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/05/25 20:42:10 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_printf_c(void)
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
	flag &= (out_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	return (flag);
}
