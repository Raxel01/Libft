/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:47:48 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/11 10:29:56 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*sdes;
	unsigned char			*ssrc;
	char					temp[len];

	i = 0;
	sdes = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	while (i < len)
	{
		temp[i] = ssrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		sdes[i] = temp[i];
		i++;
	}
	return (sdes);
}
