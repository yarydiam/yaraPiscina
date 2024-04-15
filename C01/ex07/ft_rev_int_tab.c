/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:43:11 by yadiaman          #+#    #+#             */
/*   Updated: 2024/02/06 23:56:52 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	aux;
	int	ci;
	int	cf;

	aux = 0;
	ci = 0;
	cf = size - 1;
	while (ci < cf)
	{
		aux = tab[ci];
		tab[ci] = tab[cf];
		tab[cf] = aux;
		ci++;
		cf--;
	}
}
