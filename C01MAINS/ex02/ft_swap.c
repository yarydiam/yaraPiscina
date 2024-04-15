/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:16:24 by yadiaman          #+#    #+#             */
/*   Updated: 2024/02/01 21:59:14 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int a = 1;
	int b = 2;
	ft_swap(&a, &b);
	
	char a2 = a + 48;
	char b2 = b + 48;
	write(1, &a2, 1);
	write(1, &b2, 1);
	return (0);
}
