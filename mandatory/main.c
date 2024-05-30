/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 01:54:42 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/05/26 01:54:42 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	main(void)
{
	int	result[2];

	ft_memset(result, 0, sizeof(result));
	result[test_printf_c()]++;
	result[test_printf_percent()]++;
	result[test_printf_s_hello_world()]++;
	result[test_printf_s_hello_world_with_newline()]++;
	result[test_printf_s_one_char()]++;
	result[test_printf_s_tab()]++;
	result[test_printf_s_empty()]++;
	// result[test_printf_s_null()]++; // undefined behavior
	result[test_printf_d_42()]++;
	result[test_printf_d_minus_42()]++;
	result[test_printf_d_0()]++;
	result[test_printf_d_intmax()]++;
	result[test_printf_d_intmin()]++;
	result[test_printf_d_intmax_plus_1()]++;
	result[test_printf_d_intmax_minus_1()]++;
	result[test_printf_d_intmin_plus_1()]++;
	result[test_printf_d_intmin_minus_1()]++;
	result[test_printf_d_42_42_42()]++;
	result[test_printf_d_uintmax()]++;
	result[test_printf_d_longmax()]++;
	result[test_printf_d_longmin()]++;
	result[test_printf_i_42()]++;
	result[test_printf_i_minus_42()]++;
	result[test_printf_i_0()]++;
	result[test_printf_i_intmax()]++;
	result[test_printf_i_intmin()]++;
	result[test_printf_i_intmax_plus_1()]++;
	result[test_printf_i_intmax_minus_1()]++;
	result[test_printf_i_intmin_plus_1()]++;
	result[test_printf_i_intmin_minus_1()]++;
	result[test_printf_i_42_42_42()]++;
	result[test_printf_i_uintmax()]++;
	result[test_printf_i_longmax()]++;
	result[test_printf_i_longmin()]++;
	result[test_printf_u_42()]++;
	result[test_printf_u_0()]++;
	result[test_printf_u_minus_42()]++;
	result[test_printf_u_uintmax()]++;
	result[test_printf_u_longmax()]++;
	result[test_printf_u_longmin()]++;
	result[test_printf_u_uintmax_plus_1()]++;
	result[test_printf_u_uintmax_minus_1()]++;
	result[test_printf_u_42_42_42()]++;
	result[test_printf_x_42()]++;
	result[test_printf_x_0()]++;
	result[test_printf_x_minus_42()]++;
	result[test_printf_x_intmax()]++;
	result[test_printf_x_intmin()]++;
	result[test_printf_x_uintmax()]++;
	result[test_printf_x_longmax()]++;
	result[test_printf_x_longmin()]++;
	result[test_printf_x_42_42_42()]++;
	result[test_printf_x_upper_42()]++;
	result[test_printf_x_upper_0()]++;
	result[test_printf_x_upper_minus_42()]++;
	result[test_printf_x_upper_intmax()]++;
	result[test_printf_x_upper_intmin()]++;
	result[test_printf_x_upper_uintmax()]++;
	result[test_printf_x_upper_longmax()]++;
	result[test_printf_x_upper_longmin()]++;
	result[test_printf_x_upper_42_42_42()]++;
	result[test_printf_p_42()]++;
	result[test_printf_p_address()]++;
	// result[test_printf_p_null()]++; // undefined behavior
	result[test_printf_multiple()]++;
	printf("%d cases found\n", result[0] + result[1]);
	printf("success: %d cases, failure: %d cases\n", result[1], result[0]);
	if (result[0] == 0)
		printf("All tests passed!\n");
	else
		printf("%d tests failed.\n", result[0]);
	return (result[0] > 0);
}
