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
#include <stdio.h>

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
	unsigned int	go_dest;
	unsigned int	go_src;

	go_src = 0;
	go_dest = ft_strlen(dest);
	if (size < 1)
		return (ft_strlen(src) + size);
	while (src[go_src] && go_dest < size - 1)
	{
		dest[go_dest] = src[go_src];
		go_dest++;
		go_src++;
	}
	dest[go_dest] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	else
		return (go_dest);
}
