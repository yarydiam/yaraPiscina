/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:45:02 by yadiaman          #+#    #+#             */
/*   Updated: 2024/02/06 22:40:48 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main()
{
	char	str[] = "hola";
	ft_putstr(str);
	return 0;
}
