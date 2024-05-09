/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:12:58 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/19 12:34:16 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + i));
	while (i >= 0)
	{
		if ((char )str[i] == (char) c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
