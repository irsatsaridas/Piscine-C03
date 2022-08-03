/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:00:35 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/02 12:46:27 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int    i;
	unsigned int    j;
	unsigned int	l_dest;
	unsigned int	l_src;

	i = ft_strlen(dest);
	j = 0;
	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	if (size < 1)
		return (l_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < l_dest)
		return (l_src + size);
	else
		return (l_dest + l_src);
}
