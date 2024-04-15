/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:46:55 by yadiaman          #+#    #+#             */
/*   Updated: 2024/01/31 20:04:27 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

int	main(void)
{
	int x;
	int	*p1;
	int	**p2;
	int	***p3;

	x = 43;
	p1 = &x;
	p2 = &p1;
	p3 = &p2;
	
	write(1, **p3, 1); 
	ft_ultimate_ft(p3);
	write(1, **p3, 1);
	return (0);
}
