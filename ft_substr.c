/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:38:53 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 09:00:46 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (s)
	{
		i = start;
		j = 0;
		if (start >= ft_strlen(s))
			return (ft_strdup(""));
		if (len >= ft_strlen(s))
			len = ft_strlen(s);
		str = (char *)malloc(sizeof(char) * (len +1));
		if (!str)
			return (NULL);
		while (s[i] && i < (len + start))
		{
			str[j++] = s[i++];
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
