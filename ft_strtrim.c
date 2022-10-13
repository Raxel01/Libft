/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:53:16 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/12 16:58:28 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	char_in_str(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	int	ft_get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!char_in_str(set, s1[i]))
			return (i);
		i++;
	}
	return (ft_strlen(s1));
}

static	int	ft_get_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1)-1;
	while (i >= 0)
	{
		if (!char_in_str(set, s1[i]))
			return (i);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		len;
	int		i;

	end = ft_get_end(s1, set);
	start = ft_get_start(s1, set);
	len = end - start + 1;
	i = start;
	if (end < start)
		len = 1;
	str = (char *)malloc(len);
	if (!str)
		return (str);
	while (i <= end)
	{
		str[i - start] = s1[i];
		i++;
	}
	str[i - start] = '\0';
	return (str);
}
