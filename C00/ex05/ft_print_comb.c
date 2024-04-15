/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:04:00 by yadiaman          #+#    #+#             */
/*   Updated: 2024/01/29 21:05:12 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_if(char num1, char num2, char num3)
{
	if (num1 == '7' && num2 == '8' && num3 == '9')
	{
		write(1, &num1, 1);
		write(1, &num2, 1);
		write(1, &num3, 1);
	}
	else
	{
		write(1, &num1, 1);
		write(1, &num2, 1);
		write(1, &num3, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_print_if(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
