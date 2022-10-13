/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:45:49 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/13 13:46:12 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const*s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	index;
	char	*str;

	len = ft_strlen(s);
	if (!s || !f)
		return (0);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		str[index] = f (index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
