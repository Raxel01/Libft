/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:38:53 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/11 14:13:56 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_strlen.c"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char 		 *str;
	unsigned int i;
	unsigned int j;
	unsigned char lenght;

	i = start;
	j = 0;
	lenght = ft_strlen(s) + 1;
	if(!s)
		return(NULL);
	str= (char *)malloc(sizeof(s) * (len +1));
	if (!str)
		return(str);

	while(s[i] && i <= (len + start) -1)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return(str);
}
int main()
{
	char *s="abdelali";
	char *str = ft_substr(s,1,4);
	puts(str);
	return 0;
}
