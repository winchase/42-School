
#include <stdio.h>
#include <ctype.h>

char *ft_strlowcase(char *str)
{
    int index = 0;
    while(str[index] != '\0')
    {
        if(str[index] >= 'A' && str[index] <= 'Z')
        {
           //str[index] = tolower(str[index]); change 2
           str[index] = str[index] - ('A' - 'a');
        }
       index++;
    }
    return str;
}

//int main(void) {
//    char src[] = "heLLo WoRd";
//    printf("Result = %s\n",ft_strlowcase(src));
//    return 0;
//}
