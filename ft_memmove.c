/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:55:09 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 12:37:31 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t numBytes)
{
	char	temp[1];
	size_t	i;
	size_t	last_byte;

	last_byte = numBytes;
	i = 0;
	while (i < numBytes)
	{
		temp[0] = ((unsigned char *)src)[last_byte - 1];
		((unsigned char *)dst)[last_byte - 1] = temp[0];
		last_byte--;
		i++;
	}
	return (dst);
}

/*int				main(int argc, const char *argv[])
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	dest = src + 1;
	printf("%s",ft_memmove(src,dest,8));
	
	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_memmove(dest, "consectetur", 5);
	else if (arg == 2)
		check_memmove(dest, "con\0sec\0\0te\0tur", 10);
	else if (arg == 3)
		check_memmove(dest, src, 8);
	else if (arg == 4)
		check_memmove(src, dest, 8);
	else if (arg == 5)
		check_memmove(src, dest, 0)
	return (0);
}*/
