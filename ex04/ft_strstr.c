/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:48:43 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 22:47:06 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	countfind;
	int	control;

	countfind = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			countfind = 0;
			control = 1;
			while (to_find[countfind] != '\0')
			{	
				if (str[countfind] != to_find[countfind])
					control = 0;
				countfind++;
			}
			if (control)
				return (str);
		}
		str++;
	}
	return (0);
}
