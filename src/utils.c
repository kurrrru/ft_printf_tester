/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:07:17 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 13:07:17 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	result(const char *test_name, int flag)
{
	static int	test_num = 1;

	printf("\x1b[1mtest%4d:\x1b[0m %-40s: ", test_num++, test_name);
	if (flag == 0)
		printf("\x1b[31m[NG]\x1b[39m\n");
	else
		printf("\x1b[32m[OK]\x1b[39m\n");
}

int	print_cmp(void)
{
	int		fd;
	char	s1[1001];
	char	s2[1001];
	int		read_size;

	fd = open("result_printf.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	read_size = read(fd, s1, 1000);
	s1[read_size] = '\0';
	close(fd);
	fd = open("result_ft_printf.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	read_size = read(fd, s2, 1000);
	s2[read_size] = '\0';
	close(fd);
	return (ft_strncmp(s1, s2, 1000));
}
