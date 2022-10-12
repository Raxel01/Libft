/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:32:43 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/12 09:05:18 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *sc1;
	unsigned char *sc2;
	sc1 = (unsigned char*)s1;
	sc2 = (unsigned char*)s2;

	i = 0;
	while ((sc1[i] || sc2[i]) && i < n)
	{
		if (sc1[i]!= sc2[i])
			return(sc1[i] - sc2[i]);
		i++;
	}
	return(0);


}
