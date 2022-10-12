/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:02:24 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/06 17:23:57 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *sec;

	sec = (unsigned char *)s;
	i = 0;
	while (sec[i] && i < n)
	{
		if (sec[i] == (unsigned char)c)
				return(sec + i);

	i++;
	}
	return(NULL);
}
