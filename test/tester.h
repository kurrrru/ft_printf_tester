/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:49:53 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/05/25 23:49:53 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# include "../ft_printf.h"
# include "../libft/libft.h"

void	result(const char *test_name, int flag);
int		out_cmp(void);

int		test_printf_c(void);
int		test_printf_percent(void);
int		test_printf_hello_world(void);
int		test_printf_s_hello_world(void);
int		test_printf_s_hello_world_with_newline(void);
int		test_printf_s_one_char(void);
int		test_printf_s_tab(void);
int		test_printf_s_empty(void);
int		test_printf_s_null(void);

int		test_printf_d_42(void);
int		test_printf_d_minus_42(void);
int		test_printf_d_0(void);
int		test_printf_d_intmax(void);
int		test_printf_d_intmin(void);
int		test_printf_d_intmax_plus_1(void);
int		test_printf_d_intmax_minus_1(void);
int		test_printf_d_intmin_plus_1(void);
int		test_printf_d_intmin_minus_1(void);
int		test_printf_d_42_42_42(void);
int		test_printf_d_uintmax(void);
int		test_printf_d_longmax(void);
int		test_printf_d_longmin(void);

int		test_printf_i_42(void);
int		test_printf_i_minus_42(void);
int		test_printf_i_0(void);
int		test_printf_i_intmax(void);
int		test_printf_i_intmin(void);
int		test_printf_i_intmax_plus_1(void);
int		test_printf_i_intmax_minus_1(void);
int		test_printf_i_intmin_plus_1(void);
int		test_printf_i_intmin_minus_1(void);
int		test_printf_i_42_42_42(void);
int		test_printf_i_uintmax(void);
int		test_printf_i_longmax(void);
int		test_printf_i_longmin(void);

int		test_printf_u_42(void);
int		test_printf_u_0(void);
int		test_printf_u_minus_42(void);
int		test_printf_u_uintmax(void);
int		test_printf_u_longmax(void);
int		test_printf_u_longmin(void);
int		test_printf_u_uintmax_plus_1(void);
int		test_printf_u_uintmax_minus_1(void);
int		test_printf_u_42_42_42(void);

int		test_printf_x_42(void);
int		test_printf_x_0(void);
int		test_printf_x_minus_42(void);
int		test_printf_x_intmax(void);
int		test_printf_x_intmin(void);
int		test_printf_x_uintmax(void);
int		test_printf_x_longmax(void);
int		test_printf_x_longmin(void);
int		test_printf_x_42_42_42(void);

int		test_printf_x_upper_42(void);
int		test_printf_x_upper_0(void);
int		test_printf_x_upper_minus_42(void);
int		test_printf_x_upper_intmax(void);
int		test_printf_x_upper_intmin(void);
int		test_printf_x_upper_uintmax(void);
int		test_printf_x_upper_longmax(void);
int		test_printf_x_upper_longmin(void);
int		test_printf_x_upper_42_42_42(void);

int		test_printf_p_42(void);
int		test_printf_p_address(void);
int		test_printf_p_null(void);

int		test_printf_multiple(void);

#endif
