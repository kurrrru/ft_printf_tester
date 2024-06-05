/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:05:10 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/06/02 13:05:10 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	main(void)
{
	int	result[2] = {0, 0};

	result[c_all()]++;

	result[hello_world()]++;
	result[s_hello_world()]++;
	result[s_hello_world_with_newline()]++;
	result[s_one_char()]++;
	result[s_tab()]++;
	result[s_empty()]++;
	result[s_null()]++; // undefined behavior

	result[d_0()]++;
	result[d_1()]++;
	result[d_minus_1()]++;
	result[d_42()]++;
	result[d_minus_42()]++;
	result[d_424242()]++;
	result[d_intmax()]++;
	result[d_intmax_minus_1()]++;
	result[d_intmin()]++;
	result[d_intmin_plus_1()]++;
	result[d_42_42_42()]++;

	result[i_0()]++;
	result[i_1()]++;
	result[i_minus_1()]++;
	result[i_42()]++;
	result[i_minus_42()]++;
	result[i_424242()]++;
	result[i_intmax()]++;
	result[i_intmax_minus_1()]++;
	result[i_intmin()]++;
	result[i_intmin_plus_1()]++;
	result[i_42_42_42()]++;

	result[u_0()]++;
	result[u_1()]++;
	result[u_42()]++;
	result[u_123456()]++;
	result[u_intmax()]++;
	result[u_uintmax()]++;
	result[u_uintmax_minus_1()]++;
	result[u_1_10_100_1000()]++;

	result[x_0()]++;
	result[x_1()]++;
	result[x_42()]++;
	result[x_123456()]++;
	result[x_intmax()]++;
	result[x_uintmax()]++;
	result[x_uintmax_minus_1()]++;
	result[x_1_10_100_1000()]++;

	result[x_upper_0()]++;
	result[x_upper_1()]++;
	result[x_upper_42()]++;
	result[x_upper_123456()]++;
	result[x_upper_intmax()]++;
	result[x_upper_uintmax()]++;
	result[x_upper_uintmax_minus_1()]++;
	result[x_upper_1_10_100_1000()]++;

	// result[p_0()]++; // undefined behavior
	result[p_1()]++;
	result[p_42()]++;
	result[p_123456()]++;
	// result[p_null()]++; // undefined behavior
	result[p_address()]++;
	result[p_intmax()]++;
	result[p_uintmax()]++;
	result[p_42_42_42()]++;

	result[multiple1()]++;
	result[multiple2()]++;
	result[multiple3()]++;

	result[percent()]++;
	result[percent_percent()]++;

#ifdef BONUS
	result[c_right_w5()]++;
	result[c_left_w5()]++;
	result[c_right_w20()]++;

	result[s_hello_world_right_w10()]++;
	result[s_hello_world_left_w10()]++;
	result[s_hello_world_right_w10_left_w15()]++;
	result[s_hello_world_right_w20_p3()]++;
	result[s_hello_world_left_w20_p3()]++;
	result[s_hello_world_left_w4_p7()]++;
	result[s_hello_world_left_p7()]++;

	result[d_42_left()]++;
	result[d_42_right_w5()]++;
	result[d_42_left_w5()]++;
	result[d_12345_right_p3()]++;
	result[d_12345_left_p3()]++;
	result[d_12345_right_p8()]++;
	result[d_12345_left_p8()]++;
	result[d_12345_right_w10_p8()]++;
	result[d_12345_left_w10_p8()]++;
	result[d_minus_42_left()]++;
	result[d_minus_42_right_w5()]++;
	result[d_minus_42_left_w5()]++;
	result[d_minus_12345_right_p3()]++;
	result[d_minus_12345_left_p3()]++;
	result[d_minus_12345_right_p8()]++;
	result[d_minus_12345_left_p8()]++;
	result[d_minus_12345_right_w10_p8()]++;
	result[d_minus_12345_left_w10_p8()]++;
	result[d_42_right_zero_w8()]++;
	result[d_42_left_zero_w8()]++;
	result[d_12345_right_zero_p3()]++;
	result[d_12345_left_zero_p3()]++;
	result[d_12345_right_zero_p8()]++;
	result[d_12345_left_zero_p8()]++;
	result[d_42_right_plus()]++;
	result[d_42_left_plus()]++;
	result[d_42_right_space()]++;
	result[d_42_left_space()]++;
	result[d_42_right_plus_w10()]++;
	result[d_42_left_plus_w10()]++;
	result[d_42_right_space_w10()]++;
	result[d_42_left_space_w10()]++;
	result[d_42_right_plus_zero_w10()]++;
	result[d_42_left_plus_zero_w10()]++;
	result[d_42_right_space_zero_w10()]++;
	result[d_42_left_space_zero_w10()]++;
	result[d_42_right_plus_p8()]++;
	result[d_42_left_plus_p8()]++;
	result[d_42_right_space_p8()]++;
	result[d_42_left_space_p8()]++;
	result[d_minus_42_right_zero_w8()]++;
	result[d_minus_42_left_zero_w8()]++;
	result[d_minus_12345_right_zero_p3()]++;
	result[d_minus_12345_left_zero_p3()]++;
	result[d_minus_12345_right_zero_p8()]++;
	result[d_minus_12345_left_zero_p8()]++;
	result[d_minus_42_right_plus()]++;
	result[d_minus_42_left_plus()]++;
	result[d_minus_42_right_space()]++;
	result[d_minus_42_left_space()]++;
	result[d_minus_42_right_plus_w10()]++;
	result[d_minus_42_left_plus_w10()]++;
	result[d_minus_42_right_space_w10()]++;
	result[d_minus_42_left_space_w10()]++;
	result[d_minus_42_right_plus_zero_w10()]++;
	result[d_minus_42_left_plus_zero_w10()]++;
	result[d_minus_42_right_space_zero_w10()]++;
	result[d_minus_42_left_space_zero_w10()]++;
	result[d_minus_42_right_plus_p8()]++;
	result[d_minus_42_left_plus_p8()]++;
	result[d_minus_42_right_space_p8()]++;
	result[d_minus_42_left_space_p8()]++;
	result[d_intmax_left_plus_w30_p20()]++;
	result[d_intmax_left_space_w30_p20()]++;
	result[d_intmin_left_plus_w30_p20()]++;
	result[d_intmin_left_space_w30_p20()]++;
	result[d_0_plus()]++;
	result[d_0_space()]++;
	result[d_0_plus_w10()]++;
	result[d_0_space_w10()]++;

	result[i_42_left()]++;
	result[i_42_right_w5()]++;
	result[i_42_left_w5()]++;
	result[i_12345_right_p3()]++;
	result[i_12345_left_p3()]++;
	result[i_12345_right_p8()]++;
	result[i_12345_left_p8()]++;
	result[i_12345_right_w10_p8()]++;
	result[i_12345_left_w10_p8()]++;
	result[i_minus_42_left()]++;
	result[i_minus_42_right_w5()]++;
	result[i_minus_42_left_w5()]++;
	result[i_minus_12345_right_p3()]++;
	result[i_minus_12345_left_p3()]++;
	result[i_minus_12345_right_p8()]++;
	result[i_minus_12345_left_p8()]++;
	result[i_minus_12345_right_w10_p8()]++;
	result[i_minus_12345_left_w10_p8()]++;
	result[i_42_right_zero_w8()]++;
	result[i_42_left_zero_w8()]++;
	result[i_12345_right_zero_p3()]++;
	result[i_12345_left_zero_p3()]++;
	result[i_12345_right_zero_p8()]++;
	result[i_12345_left_zero_p8()]++;
	result[i_42_right_plus()]++;
	result[i_42_left_plus()]++;
	result[i_42_right_space()]++;
	result[i_42_left_space()]++;
	result[i_42_right_plus_w10()]++;
	result[i_42_left_plus_w10()]++;
	result[i_42_right_space_w10()]++;
	result[i_42_left_space_w10()]++;
	result[i_42_right_plus_zero_w10()]++;
	result[i_42_left_plus_zero_w10()]++;
	result[i_42_right_space_zero_w10()]++;
	result[i_42_left_space_zero_w10()]++;
	result[i_42_right_plus_p8()]++;
	result[i_42_left_plus_p8()]++;
	result[i_42_right_space_p8()]++;
	result[i_42_left_space_p8()]++;
	result[i_minus_42_right_zero_w8()]++;
	result[i_minus_42_left_zero_w8()]++;
	result[i_minus_12345_right_zero_p3()]++;
	result[i_minus_12345_left_zero_p3()]++;
	result[i_minus_12345_right_zero_p8()]++;
	result[i_minus_12345_left_zero_p8()]++;
	result[i_minus_42_right_plus()]++;
	result[i_minus_42_left_plus()]++;
	result[i_minus_42_right_space()]++;
	result[i_minus_42_left_space()]++;
	result[i_minus_42_right_plus_w10()]++;
	result[i_minus_42_left_plus_w10()]++;
	result[i_minus_42_right_space_w10()]++;
	result[i_minus_42_left_space_w10()]++;
	result[i_minus_42_right_plus_zero_w10()]++;
	result[i_minus_42_left_plus_zero_w10()]++;
	result[i_minus_42_right_space_zero_w10()]++;
	result[i_minus_42_left_space_zero_w10()]++;
	result[i_minus_42_right_plus_p8()]++;
	result[i_minus_42_left_plus_p8()]++;
	result[i_minus_42_right_space_p8()]++;
	result[i_minus_42_left_space_p8()]++;
	result[i_intmax_left_plus_w30_p20()]++;
	result[i_intmax_left_space_w30_p20()]++;
	result[i_intmin_left_plus_w30_p20()]++;
	result[i_intmin_left_space_w30_p20()]++;
	result[i_0_plus()]++;
	result[i_0_space()]++;
	result[i_0_plus_w10()]++;
	result[i_0_space_w10()]++;

	result[u_42_left()]++;
	result[u_42_right_w5()]++;
	result[u_42_left_w5()]++;
	result[u_12345_right_p3()]++;
	result[u_12345_left_p3()]++;
	result[u_12345_right_p8()]++;
	result[u_12345_left_p8()]++;
	result[u_12345_right_w10_p8()]++;
	result[u_12345_left_w10_p8()]++;
	result[u_intmax_left_w30_p20()]++;
	result[u_uintmax_left_w30_p20()]++;
	result[u_0_right_w5_p3()]++;
	result[u_0_left_w5_p3()]++;
	result[u_42_right_zero_w8()]++;
	result[u_42_left_zero_w8()]++;
	result[u_12345_right_zero_p3()]++;
	result[u_12345_left_zero_p3()]++;
	result[u_12345_right_zero_p8()]++;
	result[u_12345_left_zero_p8()]++;

	result[x_42_left()]++;
	result[x_42_right_w5()]++;
	result[x_42_left_w5()]++;
	result[x_12345_right_p3()]++;
	result[x_12345_left_p3()]++;
	result[x_12345_right_p8()]++;
	result[x_12345_left_p8()]++;
	result[x_12345_right_w10_p8()]++;
	result[x_12345_left_w10_p8()]++;
	result[x_intmax_left_w30_p20()]++;
	result[x_uintmax_left_w30_p20()]++;
	result[x_0_right_w5_p3()]++;
	result[x_0_left_w5_p3()]++;
	result[x_42_hash_right()]++;
	result[x_42_hash_left()]++;
	result[x_42_hash_right_w5()]++;
	result[x_42_hash_left_w5()]++;
	result[x_12345_hash_right_p3()]++;
	result[x_12345_hash_left_p3()]++;
	result[x_12345_hash_right_p8()]++;
	result[x_12345_hash_left_p8()]++;
	result[x_12345_hash_right_w10_p8()]++;
	result[x_12345_hash_left_w10_p8()]++;
	result[x_intmax_hash_left_w30_p20()]++;
	result[x_uintmax_hash_left_w30_p20()]++;
	result[x_0_hash_right_w5_p3()]++;
	result[x_0_hash_left_w5_p3()]++;
	result[x_42_right_zero_w8()]++;
	result[x_42_left_zero_w8()]++;
	result[x_12345_right_zero_p3()]++;
	result[x_12345_left_zero_p3()]++;
	result[x_12345_right_zero_p8()]++;
	result[x_12345_left_zero_p8()]++;
	result[x_42_hash_right_zero_w8()]++;
	result[x_42_hash_left_zero_w8()]++;
	result[x_12345_hash_right_zero_p3()]++;
	result[x_12345_hash_left_zero_p3()]++;
	result[x_12345_hash_right_zero_p8()]++;
	result[x_12345_hash_left_zero_p8()]++;

	result[x_upper_42_left()]++;
	result[x_upper_42_right_w5()]++;
	result[x_upper_42_left_w5()]++;
	result[x_upper_12345_right_p3()]++;
	result[x_upper_12345_left_p3()]++;
	result[x_upper_12345_right_p8()]++;
	result[x_upper_12345_left_p8()]++;
	result[x_upper_12345_right_w10_p8()]++;
	result[x_upper_12345_left_w10_p8()]++;
	result[x_upper_intmax_left_w30_p20()]++;
	result[x_upper_uintmax_left_w30_p20()]++;
	result[x_upper_0_right_w5_p3()]++;
	result[x_upper_0_left_w5_p3()]++;
	result[x_upper_42_hash_right()]++;
	result[x_upper_42_hash_left()]++;
	result[x_upper_42_hash_right_w5()]++;
	result[x_upper_42_hash_left_w5()]++;
	result[x_upper_12345_hash_right_p3()]++;
	result[x_upper_12345_hash_left_p3()]++;
	result[x_upper_12345_hash_right_p8()]++;
	result[x_upper_12345_hash_left_p8()]++;
	result[x_upper_12345_hash_right_w10_p8()]++;
	result[x_upper_12345_hash_left_w10_p8()]++;
	result[x_upper_intmax_hash_left_w30_p20()]++;
	result[x_upper_uintmax_hash_left_w30_p20()]++;
	result[x_upper_0_hash_right_w5_p3()]++;
	result[x_upper_0_hash_left_w5_p3()]++;
	result[x_upper_42_right_zero_w8()]++;
	result[x_upper_42_left_zero_w8()]++;
	result[x_upper_12345_right_zero_p3()]++;
	result[x_upper_12345_left_zero_p3()]++;
	result[x_upper_12345_right_zero_p8()]++;
	result[x_upper_12345_left_zero_p8()]++;
	result[x_upper_42_hash_right_zero_w8()]++;
	result[x_upper_42_hash_left_zero_w8()]++;
	result[x_upper_12345_hash_right_zero_p3()]++;
	result[x_upper_12345_hash_left_zero_p3()]++;
	result[x_upper_12345_hash_right_zero_p8()]++;
	result[x_upper_12345_hash_left_zero_p8()]++;

	result[p_42_left()]++;
	result[p_42_right_w5()]++;
	result[p_42_left_w5()]++;
	result[p_42_right_zero_w8()]++;
	result[p_42_left_zero_w8()]++;
	result[p_0_left()]++;
	result[p_0_right_w5()]++;
	result[p_0_left_w5()]++;
#endif

	printf("\n");
	printf("%d cases found\n", result[0] + result[1]);
	printf("success: %d cases, failure: %d cases\n", result[1], result[0]);
	if (result[0] == 0)
		printf("All tests passed!\n");
	else
		printf("%d tests failed.\n", result[0]);
	return (0);
}
