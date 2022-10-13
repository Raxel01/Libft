/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:28:32 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/13 16:26:10 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	i = 0;
	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (lens == 0)
		return(size);
	if (lend < size)
	{
		while (src[i] && (i + lend) < (size - 1))
		{
			dest[i + lend] = src[i];
			i++;
		}
		dest[i + lend] = '\0';
		return (lend + lens);
	}
	else
		return (lens + size);
}
