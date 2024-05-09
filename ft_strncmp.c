/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:39:16 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/13 13:50:21 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (((unsigned char)s1[i] || (unsigned char)s2[i]) && i < n)
	{
		if ((unsigned char )s1[i] -(unsigned char )s2[i] > 0)
			return (1);
		else if ((unsigned char )s1[i] - (unsigned char) s2[i] < 0)
			return (-1);
		i++;
	}
	return (0);
}
