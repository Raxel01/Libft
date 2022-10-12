/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:12:58 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/06 16:39:02 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include "ft_strlen.c"

char *ft_strrchr(char *str, int c)
{
	int i;

	i = ft_strlen(str);
	printf("%d", i);
	while(str[i])
	{
		if (str[i] == (char)c)
		return(str + i);
		i--;
	}
	return(NULL);
}
