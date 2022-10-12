/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:53:53 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/08 16:59:34 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

char *ft_strchr(char *s,int c)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
				return(s + i);

	i++;
	}
	return(NULL);
}
int main()
{
    char str[]="";
	printf("\n%s\n",strchr(str,65));
	return 0;
}
