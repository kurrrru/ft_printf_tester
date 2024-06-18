/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:02:24 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 13:02:24 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# ifdef BONUS
	# include "../../ft_printf_bonus.h"
# endif

# ifdef MANDATORY
	# include "../../ft_printf.h"
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

void	result(const char *test_name, int flag);
int		print_cmp(void);

// === Mandatory part ===
// %c mandatory part
int		c_all(void);

// %s mandatory part
int		hello_world(void);
int		s_hello_world(void);
int		s_hello_world_with_newline(void);
int		s_one_char(void);
int		s_tab(void);
int		s_empty(void);
int		s_null(void);

// %d mandatory part
int		d_0(void);
int		d_1(void);
int		d_minus_1(void);
int		d_42(void);
int		d_minus_42(void);
int		d_424242(void);
int		d_intmax(void);
int		d_intmax_minus_1(void);
int		d_intmin(void);
int		d_intmin_plus_1(void);
int		d_42_42_42(void);

// %i mandatory part
int		i_0(void);
int		i_1(void);
int		i_minus_1(void);
int		i_42(void);
int		i_minus_42(void);
int		i_424242(void);
int		i_intmax(void);
int		i_intmax_minus_1(void);
int		i_intmin(void);
int		i_intmin_plus_1(void);
int		i_42_42_42(void);

// %u mandatory part
int		u_0(void);
int		u_1(void);
int		u_42(void);
int		u_123456(void);
int		u_intmax(void);
int		u_uintmax(void);
int		u_uintmax_minus_1(void);
int		u_1_10_100_1000(void);

// %x mandatory part
int		x_0(void);
int		x_1(void);
int		x_42(void);
int		x_123456(void);
int		x_intmax(void);
int		x_uintmax(void);
int		x_uintmax_minus_1(void);
int		x_1_10_100_1000(void);

// %X mandatory part
int		x_upper_0(void);
int		x_upper_1(void);
int		x_upper_42(void);
int		x_upper_123456(void);
int		x_upper_intmax(void);
int		x_upper_uintmax(void);
int		x_upper_uintmax_minus_1(void);
int		x_upper_1_10_100_1000(void);

// %p mandatory part
int		p_0(void);
int		p_1(void);
int		p_42(void);
int		p_123456(void);
int		p_null(void);
int		p_address(void);
int		p_intmax(void);
int		p_uintmax(void);
int		p_42_42_42(void);

// multiple format mandatory part
int		multiple1(void);
int		multiple2(void);
int		multiple3(void);

// %% mandatory part
int		percent(void);
int		percent_percent(void);

// === Bonus part ===
// %c bonus part
int		c_right_w5(void);
int		c_left_w5(void);
int		c_right_w20(void);

// %s bonus part
int		s_hello_world_right_w10(void);
int		s_hello_world_left_w10(void);
int		s_hello_world_right_w10_left_w15(void);
int		s_hello_world_right_w20_p3(void);
int		s_hello_world_left_w20_p3(void);
int		s_hello_world_left_w4_p7(void);
int		s_hello_world_left_p7(void);

// %d bonus part
int		d_42_left(void);
int		d_42_right_w5(void);
int		d_42_left_w5(void);
int		d_12345_right_p3(void);
int		d_12345_left_p3(void);
int		d_12345_right_p8(void);
int		d_12345_left_p8(void);
int		d_12345_right_w10_p8(void);
int		d_12345_left_w10_p8(void);
int		d_minus_42_left(void);
int		d_minus_42_right_w5(void);
int		d_minus_42_left_w5(void);
int		d_minus_12345_right_p3(void);
int		d_minus_12345_left_p3(void);
int		d_minus_12345_right_p8(void);
int		d_minus_12345_left_p8(void);
int		d_minus_12345_right_w10_p8(void);
int		d_minus_12345_left_w10_p8(void);
int		d_42_right_zero_w8(void);
int		d_42_left_zero_w8(void);
int		d_12345_right_zero_p3(void);
int		d_12345_left_zero_p3(void);
int		d_12345_right_zero_p8(void);
int		d_12345_left_zero_p8(void);
int		d_42_right_plus(void);
int		d_42_left_plus(void);
int		d_42_right_space(void);
int		d_42_left_space(void);
int		d_42_right_plus_w10(void);
int		d_42_left_plus_w10(void);
int		d_42_right_space_w10(void);
int		d_42_left_space_w10(void);
int		d_42_right_plus_zero_w10(void);
int		d_42_left_plus_zero_w10(void);
int		d_42_right_space_zero_w10(void);
int		d_42_left_space_zero_w10(void);
int		d_42_right_plus_p8(void);
int		d_42_left_plus_p8(void);
int		d_42_right_space_p8(void);
int		d_42_left_space_p8(void);
int		d_minus_42_right_zero_w8(void);
int		d_minus_42_left_zero_w8(void);
int		d_minus_12345_right_zero_p3(void);
int		d_minus_12345_left_zero_p3(void);
int		d_minus_12345_right_zero_p8(void);
int		d_minus_12345_left_zero_p8(void);
int		d_minus_42_right_plus(void);
int		d_minus_42_left_plus(void);
int		d_minus_42_right_space(void);
int		d_minus_42_left_space(void);
int		d_minus_42_right_plus_w10(void);
int		d_minus_42_left_plus_w10(void);
int		d_minus_42_right_space_w10(void);
int		d_minus_42_left_space_w10(void);
int		d_minus_42_right_plus_zero_w10(void);
int		d_minus_42_left_plus_zero_w10(void);
int		d_minus_42_right_space_zero_w10(void);
int		d_minus_42_left_space_zero_w10(void);
int		d_minus_42_right_plus_p8(void);
int		d_minus_42_left_plus_p8(void);
int		d_minus_42_right_space_p8(void);
int		d_minus_42_left_space_p8(void);
int		d_intmax_left_plus_w30_p20(void);
int		d_intmax_left_space_w30_p20(void);
int		d_intmin_left_plus_w30_p20(void);
int		d_intmin_left_space_w30_p20(void);
int		d_0_plus(void);
int		d_0_space(void);
int		d_0_plus_w10(void);
int		d_0_space_w10(void);

// %i bonus part
int		i_42_left(void);
int		i_42_right_w5(void);
int		i_42_left_w5(void);
int		i_12345_left_p3(void);
int		i_12345_right_p3(void);
int		i_12345_right_p8(void);
int		i_12345_left_p8(void);
int		i_12345_right_w10_p8(void);
int		i_12345_left_w10_p8(void);
int		i_minus_42_left(void);
int		i_minus_42_right_w5(void);
int		i_minus_42_left_w5(void);
int		i_minus_12345_right_p3(void);
int		i_minus_12345_left_p3(void);
int		i_minus_12345_right_p8(void);
int		i_minus_12345_left_p8(void);
int		i_minus_12345_right_w10_p8(void);
int		i_minus_12345_left_w10_p8(void);
int		i_42_right_zero_w8(void);
int		i_42_left_zero_w8(void);
int		i_12345_right_zero_p3(void);
int		i_12345_left_zero_p3(void);
int		i_12345_right_zero_p8(void);
int		i_12345_left_zero_p8(void);
int		i_42_right_plus(void);
int		i_42_left_plus(void);
int		i_42_right_space(void);
int		i_42_left_space(void);
int		i_42_right_plus_w10(void);
int		i_42_left_plus_w10(void);
int		i_42_right_space_w10(void);
int		i_42_left_space_w10(void);
int		i_42_right_plus_zero_w10(void);
int		i_42_left_plus_zero_w10(void);
int		i_42_right_space_zero_w10(void);
int		i_42_left_space_zero_w10(void);
int		i_42_right_plus_p8(void);
int		i_42_left_plus_p8(void);
int		i_42_right_space_p8(void);
int		i_42_left_space_p8(void);
int		i_minus_42_right_zero_w8(void);
int		i_minus_42_left_zero_w8(void);
int		i_minus_12345_right_zero_p3(void);
int		i_minus_12345_left_zero_p3(void);
int		i_minus_12345_right_zero_p8(void);
int		i_minus_12345_left_zero_p8(void);
int		i_minus_42_right_plus(void);
int		i_minus_42_left_plus(void);
int		i_minus_42_right_space(void);
int		i_minus_42_left_space(void);
int		i_minus_42_right_plus_w10(void);
int		i_minus_42_left_plus_w10(void);
int		i_minus_42_right_space_w10(void);
int		i_minus_42_left_space_w10(void);
int		i_minus_42_right_plus_zero_w10(void);
int		i_minus_42_left_plus_zero_w10(void);
int		i_minus_42_right_space_zero_w10(void);
int		i_minus_42_left_space_zero_w10(void);
int		i_minus_42_right_plus_p8(void);
int		i_minus_42_left_plus_p8(void);
int		i_minus_42_right_space_p8(void);
int		i_minus_42_left_space_p8(void);
int		i_intmax_left_plus_w30_p20(void);
int		i_intmax_left_space_w30_p20(void);
int		i_intmin_left_plus_w30_p20(void);
int		i_intmin_left_space_w30_p20(void);
int		i_0_plus(void);
int		i_0_space(void);
int		i_0_plus_w10(void);
int		i_0_space_w10(void);

// %u bonus part
int		u_42_left(void);
int		u_42_right_w5(void);
int		u_42_left_w5(void);
int		u_12345_right_p3(void);
int		u_12345_left_p3(void);
int		u_12345_right_p8(void);
int		u_12345_left_p8(void);
int		u_12345_right_w10_p8(void);
int		u_12345_left_w10_p8(void);
int		u_intmax_left_w30_p20(void);
int		u_uintmax_left_w30_p20(void);
int		u_0_right_w5_p3(void);
int		u_0_left_w5_p3(void);
int		u_42_right_zero_w8(void);
int		u_42_left_zero_w8(void);
int		u_12345_right_zero_p3(void);
int		u_12345_left_zero_p3(void);
int		u_12345_right_zero_p8(void);
int		u_12345_left_zero_p8(void);

// %x bonus part
int		x_42_left(void);
int		x_42_right_w5(void);
int		x_42_left_w5(void);
int		x_12345_right_p3(void);
int		x_12345_left_p3(void);
int		x_12345_right_p8(void);
int		x_12345_left_p8(void);
int		x_12345_right_w10_p8(void);
int		x_12345_left_w10_p8(void);
int		x_intmax_left_w30_p20(void);
int		x_uintmax_left_w30_p20(void);
int		x_0_right_w5_p3(void);
int		x_0_left_w5_p3(void);
int		x_42_hash_right(void);
int		x_42_hash_left(void);
int		x_42_hash_right_w5(void);
int		x_42_hash_left_w5(void);
int		x_12345_hash_right_p3(void);
int		x_12345_hash_left_p3(void);
int		x_12345_hash_right_p8(void);
int		x_12345_hash_left_p8(void);
int		x_12345_hash_right_w10_p8(void);
int		x_12345_hash_left_w10_p8(void);
int		x_intmax_hash_left_w30_p20(void);
int		x_uintmax_hash_left_w30_p20(void);
int		x_0_hash_right_w5_p3(void);
int		x_0_hash_left_w5_p3(void);
int		x_42_right_zero_w8(void);
int		x_42_left_zero_w8(void);
int		x_12345_right_zero_p3(void);
int		x_12345_left_zero_p3(void);
int		x_12345_right_zero_p8(void);
int		x_12345_left_zero_p8(void);
int		x_42_hash_right_zero_w8(void);
int		x_42_hash_left_zero_w8(void);
int		x_12345_hash_right_zero_p3(void);
int		x_12345_hash_left_zero_p3(void);
int		x_12345_hash_right_zero_p8(void);
int		x_12345_hash_left_zero_p8(void);

// %X bonus part
int		x_upper_42_left(void);
int		x_upper_42_right_w5(void);
int		x_upper_42_left_w5(void);
int		x_upper_12345_right_p3(void);
int		x_upper_12345_left_p3(void);
int		x_upper_12345_right_p8(void);
int		x_upper_12345_left_p8(void);
int		x_upper_12345_right_w10_p8(void);
int		x_upper_12345_left_w10_p8(void);
int		x_upper_intmax_left_w30_p20(void);
int		x_upper_uintmax_left_w30_p20(void);
int		x_upper_0_right_w5_p3(void);
int		x_upper_0_left_w5_p3(void);
int		x_upper_42_hash_right(void);
int		x_upper_42_hash_left(void);
int		x_upper_42_hash_right_w5(void);
int		x_upper_42_hash_left_w5(void);
int		x_upper_12345_hash_right_p3(void);
int		x_upper_12345_hash_left_p3(void);
int		x_upper_12345_hash_right_p8(void);
int		x_upper_12345_hash_left_p8(void);
int		x_upper_12345_hash_right_w10_p8(void);
int		x_upper_12345_hash_left_w10_p8(void);
int		x_upper_intmax_hash_left_w30_p20(void);
int		x_upper_uintmax_hash_left_w30_p20(void);
int		x_upper_0_hash_right_w5_p3(void);
int		x_upper_0_hash_left_w5_p3(void);
int		x_upper_42_right_zero_w8(void);
int		x_upper_42_left_zero_w8(void);
int		x_upper_12345_right_zero_p3(void);
int		x_upper_12345_left_zero_p3(void);
int		x_upper_12345_right_zero_p8(void);
int		x_upper_12345_left_zero_p8(void);
int		x_upper_42_hash_right_zero_w8(void);
int		x_upper_42_hash_left_zero_w8(void);
int		x_upper_12345_hash_right_zero_p3(void);
int		x_upper_12345_hash_left_zero_p3(void);
int		x_upper_12345_hash_right_zero_p8(void);
int		x_upper_12345_hash_left_zero_p8(void);

// %p bonus part
int		p_42_left(void);
int		p_42_right_w5(void);
int		p_42_left_w5(void);
int		p_42_right_zero_w8(void);
int		p_42_left_zero_w8(void);
int		p_0_left(void);
int		p_0_right_w5(void);
int		p_0_left_w5(void);


#endif
