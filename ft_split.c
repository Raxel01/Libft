/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:05:31 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/22 16:32:19 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int	i;
	int	words;

	if (s[0] == '\0')
		return (0);
	words = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			words++;
		i++;
	}
	if (s[i - 1] != c)
		words++;
	return (words);
}

static char	*next_word(char *str, char c, int *len)
{
	int		i;
	char	*tmp;
	int		count;

	i = 0;
	count = 0;
	while (str[i] && str[i] == c)
		i++;
	tmp = &str[i];
	while (str[i] && str[i] != c)
	{
		count++;
		i++;
	}
	*len = count;
	return (tmp);
}

static char	**ft_freetab(char **str, int tofree)
{
	while (--tofree >= 0)
		free(str[tofree]);
	free(str);
	str = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	char	*tmp;
	int		words;
	int		len;

	if (!s)
		return (NULL);
	i = -1;
	words = ft_words(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	tmp = (char *)s;
	len = 0;
	while (++i < words)
	{
		tmp = next_word(tmp + len, c, &len);
		str[i] = (char *)malloc(len + 1);
		if (!str[i])
			return (ft_freetab(str, i));
		ft_strlcpy(str[i], tmp, len + 1);
	}
	str[i] = 0;
	return (str);
}
