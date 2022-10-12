/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 07:06:16 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/09 13:25:13 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *dest;
	unsigned char *src;

	dest = (unsigned char*)s1;
	src = (unsigned char *)s2;
	i = 0;
	while (src[i] && i < n)
	{
      dest[i] = src[i];
	  i++;
	}
	return(dest);
}
	int main()
	{
		char src[]= "abdelali";
		char dest[8];
		printf("%s \n", ft_memcpy(dest,src,3));
		return(0);
	}
