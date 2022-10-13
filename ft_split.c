/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:04:35 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/13 11:34:02 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_num_of_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**remplissage(char **str, char const *s, char c)
{
	int	i;
	int	num;
	int	ind;

	i = 0;
	num = 0;
	ind = 0;
	while (s[i])
	{
		if (s[i] != c)
			str[num][ind++] = s[i];
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			str[num][ind] = '\0';
			num++;
			ind = 0;
		}
		i++;
	}
	return (str);
}

char	**free_function(char **str, int n)
{
	n = 0;
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**str;
	int		i;
	int		len;
	int		num;

	num_words = get_num_of_words(s, c);
	str = (char **)malloc(sizeof(char *) * num_words);
	if (!str)
		return (str);
	num = 0;
	len = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			str[num++] = (char *)malloc(len + 1);
			if (!str[num - 1])
				return (free_function(str, num_words));
			len = -1;
		}
		len++;
		i++;
	}
	return (remplissage(str, s, c));
}
