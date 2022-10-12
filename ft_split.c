/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:40:51 by abait-ta          #+#    #+#             */
/*   Updated: 2022/10/11 19:04:27 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int count_to_alloc(char *str, char separ)
{
    int i;
    int j;
    
    i= 0;
    j =0;
    while (str[i])
    {
        if (str[i] != separ)
        {
            j++;
        }
        i++;
    }
    return(j);
}
static  int get_n_word(char *str, char separ )
{
    int i = 0;
    int wordcount;
    int len = strlen(str);
    wordcount = 0;

    i = 0;
    if (!str[0])
        return (0);
    while(str[i])
    {
        if (str[i] == separ && str[i + 1] != separ && i < len - 1)
        { wordcount++;
        }
        i++;
    }
    if (wordcount == 0)
        return (1);
return(wordcount);
}
static char *Decoupage(char *str,char *trans, char separ)
{
    int i = 0;
    int j = 0;
    int len = 0;
    while (str[i])
    {
        if (str[i] != separ)
        {
            trans[j] = str[i];
        j++;
        
        }
        i++;
        trans[j] = '\0';
    }

return(trans);
}

int main ()
{
    char str[]= ",,,clean,,,,code,,,try,,,to ,,,have,,,clean,,,code,,,,,,";
    char trans[50];
   // printf("%s", Decoupage(str,trans,','));
    printf("%d",count_to_alloc(str,','));
    //char *trans = Decoupage(str,trans,',');
    //puts(trans);
return 0;
}
