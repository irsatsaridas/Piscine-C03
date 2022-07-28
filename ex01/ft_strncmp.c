/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 20:57:10 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 21:24:37 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int     count;

        count = 0;
        while (count < n)
        {
                if (s1[count] != s2[count])
		{
			if (s1[count] == '\0' && s2[count] != '\0')
				return (' ' - s2[count]);
			else if (s1[count] != '\0' && s2[count] == '\0')
				return (s1[count] - ' ');
			return (s1[count] - s2[count]);
		}
                count++;
        }
     	return (0);
}
