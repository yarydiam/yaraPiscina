/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:31:52 by yadiaman          #+#    #+#             */
/*   Updated: 2024/01/30 19:28:27 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b)
{
	char	var[4];

	var[0] = (a / 10) + '0';
	var[1] = (a % 10) + '0';
	var[2] = (b / 10) + '0';
	var[3] = (b % 10) + '0';
	write(1, &var[0], 1);
	write(1, &var[1], 1);
	write(1, " ", 1);
	write(1, &var[2], 1);
	write(1, &var[3], 1);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			print(num1, num2);
			num2++;
		}
		num1++;
	}
}
