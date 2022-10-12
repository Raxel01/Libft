/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:39:16 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/06 17:00:21 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
int ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while((s1[i] || s2[i] ) &&  i < n)
	{
		if(s1[i] - s2[i] > 0)
			return(1);
		else if(s1[i] - s2[i] < 0)
			return(-1);
		i++;
	}
	return(0);
}
