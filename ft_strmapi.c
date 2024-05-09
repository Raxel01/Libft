/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:45:49 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/19 08:55:15 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const*s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	index;
	char			*str;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
