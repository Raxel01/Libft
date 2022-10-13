/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:02:57 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/13 17:19:09 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	unsigned int	i;
	
	i = 0;
	if (size == 0)
		return (ptr);
	ptr = (char *)malloc((count * size) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < (count *size))
	{
		ptr[i] = '\0';
		i++;
	}
	
	return (ptr);
}
