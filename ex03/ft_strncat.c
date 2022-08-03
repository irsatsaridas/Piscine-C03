/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:39:35 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/03 10:21:34 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	countd;
	unsigned int	counts;

	countd = 0;
	counts = 0;
	while (dest[countd] != '\0')
		countd++;
	while (counts < nb && src[counts])
	{
			dest[countd] = src[counts];
			countd++;
			counts++;
	}
	dest[countd] = '\0';
	return (dest);
}
