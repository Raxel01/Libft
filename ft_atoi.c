/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:36:24 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/11 08:45:12 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	lichara;
	int	natija;

	i = 0;
	lichara = 1;
	natija = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			lichara *= -1;
		else
			i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		natija = natija * 10 + str[i] - 48;
		i++;
	}
	return (natija * lichara);
}
