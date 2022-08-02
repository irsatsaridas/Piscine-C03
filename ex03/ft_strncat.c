/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:39:35 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/02 00:57:32 by isaridas         ###   ########.fr       */
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
	while (counts < n)
	{
		if (src[counts] != '\0')
		{
			dest[countd] = src[counts];
			countd++;
			counts++;
		}
	}
	dest[countd] = '\0';
	return (dest);
}
