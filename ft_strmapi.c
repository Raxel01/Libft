#include <stdio.h>

#include "libft.h"

#include "libft.h"

char f(unsigned int i, char c)
{
    c = c - 32;

	return (c);
}
char* ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
    size_t len;
    size_t index;
    char *str;
    
    len = ft_strlen(s);

    str = (char *) malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    index = 0;
    while (s[index])
    {
        str[index] =f(index,s[index]);
        index++;
    }
    str[index] = '\0';
    return (str);
}
int main ()
{
    char str[] = "abdelali";
    char *new = ft_strmapi(str,*f );
    printf("----%s--\n", new);

}
