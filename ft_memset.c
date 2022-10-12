/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:29:38 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/06 21:15:20 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned int	i;

	i = 0;
	ptr = (unsigned char *)b;

	while(i < len )
	{
		ptr[i] =  c;
		i++;
	}
	return(ptr);
}

int main ()
{
	int   str[] = {2,5,6,3,2};
	ft_memset(str,2 ,3);
	int i = 0;
	while (i < 3)
	{
	printf("STR[%d] = %d -- ",i,str[i]);
	i++;
	}
	return 0;

}
