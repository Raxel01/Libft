/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:38:53 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/13 12:53:39 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned char 	lenght;

	lenght = ft_strlen(s);



	i = start;
	j = 0;
	
	if (!s)
		return (NULL);
	else if (start >= ft_strlen(s))
		return (ft_strdup(""));

	str = (char *)malloc(sizeof(char) * (len +1));
	if (!str)
		return (str);
	while (s[i] && i <= (len + start) - 1)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
int main()
{
	char str[] = "";

	char *new = ft_substr(str,5,4);
	printf("%s", new);
	return 0;

}
