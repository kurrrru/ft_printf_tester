/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:05:44 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 13:05:44 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	hello_world(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("Hello, world!");
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("Hello, world!");
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("Hello, world!");
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("Hello, world!");
		printf("\n");
	}
	return (flag);
}

int	s_hello_world(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%s", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%s", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%s", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%s", str);
		printf("\n");
	}
	return (flag);
}

int	s_hello_world_with_newline(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!\n";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%s", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%s", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%s", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%s", str);
		printf("\n");
	}
	return (flag);
}

int	s_one_char(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "a";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%s", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%s", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%s", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%s", str);
		printf("\n");
	}
	return (flag);
}

int	s_tab(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "\t";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%s", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%s", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%s", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%s", str);
		printf("\n");
	}
	return (flag);
}

int	s_empty(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%s", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%s", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%s", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%s", str);
		printf("\n");
	}
	return (flag);
}

int	s_null(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = NULL;

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("%s", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("%s", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("%s", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("%s", str);
		printf("\n");
	}
	return (flag);
}

// Bonus part

int	s_hello_world_right_w10(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("[%10s]", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("[%10s]", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("[%10s]", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("[%10s]", str);
		printf("\n");
	}
	return (flag);
}

int	s_hello_world_left_w10(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("[%-10s]", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("[%-10s]", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("[%-10s]", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("[%-10s]", str);
		printf("\n");
	}
	return (flag);
}

int	s_hello_world_right_w10_left_w15(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("[%10s%-15s]", str, str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("[%10s%-15s]", str, str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("[%10s%-15s]", str, str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("[%10s%-15s]", str, str);
		printf("\n");
	}
	return (flag);
}

int	s_hello_world_right_w20_p3(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("[%20.3s]", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("[%20.3s]", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("[%20.3s]", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("[%20.3s]", str);
		printf("\n");
	}
	return (flag);
}

int	s_hello_world_left_w20_p3(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("[%-20.3s]", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("[%-20.3s]", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("[%-20.3s]", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("[%-20.3s]", str);
		printf("\n");
	}
	return (flag);
}

int	s_hello_world_left_w4_p7(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("[%-4.7s]", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("[%-4.7s]", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("[%-4.7s]", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("[%-4.7s]", str);
		printf("\n");
	}
	return (flag);
}

int	s_hello_world_left_p7(void)
{
	int		ret_printf;
	int		ret_ft_printf;
	int		flag;
	FILE	*fp;
	char	*str = "Hello, world!";

	fp = freopen("result_printf.txt", "w", stdout);
	ret_printf = printf("[%-.7s]", str);
	fclose(fp);
	fp = freopen("result_ft_printf.txt", "w", stdout);
	ret_ft_printf = ft_printf("[%-.7s]", str);
	fclose(fp);
	flag = (ret_printf == ret_ft_printf);
	flag &= (print_cmp() == 0);
	freopen("/dev/tty", "a", stdout);
	result(__func__, flag);
	if (flag == 0)
	{
		printf("[expect]: %d\n", ret_printf);
		printf("[%-.7s]", str);
		printf("\n");
		printf("[result]: %d\n", ret_ft_printf);
		ft_printf("[%-.7s]", str);
		printf("\n");
	}
	return (flag);
}