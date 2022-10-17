/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:53:59 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 09:24:27 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(char *hystack, char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return (hystack);
	while (hystack[i] && i < n)
	{
		j = 0;
		while (hystack[i + j] == needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return (hystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
