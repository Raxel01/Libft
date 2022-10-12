/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:23:35 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/10 18:01:10 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
void	ft_putstr_fd(char *s, int fd)
{
	unsigned char i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i],1);
		i++;
	}
}
int main ()
{
    /*******write to my file descriptor ********/
	int fd = open("MYTEST.txt",O_CREAT | O_WRONLY);

	if (fd == -1)
	{
		printf("RAAAT");
	
	}
 ft_putstr_fd("abdolali ait talb",fd);
 
 /*READ fROM MY FILE *********/
 

 return 0;

}
