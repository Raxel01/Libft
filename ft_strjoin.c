/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:06:38 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/16 15:46:57 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*end;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	end = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!end)
		return (NULL);
	while (s1[++i])
	{
		end[j] = s1[i];
		j++;
	}
	i = -1;
	while (s2[++i])
	{
	end[j] = s2[i];
	j++;
	}
	end[j] = '\0';
	return (end);
}
