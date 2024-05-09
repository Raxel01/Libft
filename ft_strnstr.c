/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:53:59 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/22 16:23:59 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *hystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)hystack);
	while (hystack[i] && i < n)
	{
		j = 0;
		while (hystack[i + j] == needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(hystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
