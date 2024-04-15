/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:30:31 by yadiaman          #+#    #+#             */
/*   Updated: 2024/02/05 20:50:16 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int div;
	int mod;
	int n;
	int n1;

	n = 42;
	n1 = 21;

	ft_div_mod(n, n1, &div, &mod);
	printf("\n%d/%d = %d with reminder %d\n\n", n, n1, div, mod);
	return 0;
}
