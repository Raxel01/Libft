/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:04:23 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/09 17:03:28 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char *ft_strdup(const char *s)
{
	char *ptr;
	size_t len = strlen(ptr) + 1;
	size_t i;

	i = 0;
	ptr = malloc (len * sizeof(char));
	if(!ptr)
		return(NULL);
	while(s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}

int main ()
{
	char *string = "abdelali";
	char *target = ft_strdup(string);
	printf("This is target %s\n",target);
	///puts(target);
	return 0;


}
