/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:09:22 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/10 18:01:59 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include"ft_putchar_fd.c"
#include <unistd.h>
#include <sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
void	ft_putnbr_fd(int nb,int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-',fd);
		ft_putnbr_fd(nb * -1,fd);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar_fd((nb + 48),fd);
	}
	else
	{
		ft_putnbr_fd((nb / 10),fd);
		ft_putnbr_fd((nb % 10),fd);
	}
}
int main()
{
	//*write One my file desc...*/
	
	int fd = open("TEST.txt", O_CREAT | O_WRONLY);

if (fd == -1)
{
	printf("ERROR ");
}	

printf("%d\n\n\n\n",fd);
ft_putnbr_fd(5,fd);



}
