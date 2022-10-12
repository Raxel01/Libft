#include <stdio.h>

char    *multiple(char *str)
{
    int i = 0;
    while (str[i])
    {
    str[i] = str[i] - 32; 
    i++;
    }
return (str);
}

int main ()
{
    char str[] = "abdelali";
    char (stre )(char) =multiple;
       stre = &multiple
    char *new = stre(str);
        printf("%s", new);


}
