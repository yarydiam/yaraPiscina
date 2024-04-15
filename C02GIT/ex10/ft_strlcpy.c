/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:18:48 by yadiaman          #+#    #+#             */
/*   Updated: 2024/02/13 20:40:01 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

/*int main()
{
	char src1[] = "hola";
	char dest2[] = "adios";
	unsigned int size = 3;

	// Antes de llamar a la función
	printf("%s\n", dest2);
	printf("%u\n", size);

	//Llamada a la funcion
	ft_strlcpy(dest2, src1, size);

	//Después de la llamada a la funcion
	printf("%s\n", dest2);
	printf("%u\n", size);
	return (0);
}*/
