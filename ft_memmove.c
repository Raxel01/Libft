/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:55:09 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/19 17:38:03 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t numBytes)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (numBytes-- > 0)
		{
			d[numBytes] = s[numBytes];
		}
	}
	else
	{
		while (i < numBytes)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
