/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:06:38 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/11 12:11:35 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

char *ft_strjoin(char const *s1, char const *s2)
{
	int 	i;
	int		j;
	char 	*end;
	
	i = 0;
	j = 0;
	end = malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!end)
		return(NULL);
	while(s1[i])
	{
		end[j] = s1[i];
			i++;
		j++;
	}
	i = 0;
	while(s2[i])
	{
	end[j] = s2[i];
		i++;
	j++;
	}
	end[j] = '\0';
	return(end);
}
int main ()
{
	char s1[] = "abdelali";
	char s2[] = "ait talb";
	char *end = ft_strjoin(s1,s2);
	puts(end);

}
