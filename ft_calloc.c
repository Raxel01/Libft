/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:02:57 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/10 06:47:55 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_bzero.c"

void	*ft_calloc(size_t count, size_t size)
{
	void  *ptr;
	
	ptr	= (char *) malloc((count * size) * sizeof(char));
	if (!ptr)
		return(NULL);
	ft_bzero(ptr,size);
	return(ptr);
}
int main()
{

	int *str =ft_calloc(3,4) ; 
	str[0] = 1;
	str[1] = 2;
	str[2] = 3;
	str = ft_calloc(3,5);
	printf("str[0] = %d", str[0]);
}
