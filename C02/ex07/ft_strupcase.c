
#include <stdio.h>
#include <ctype.h>

char *ft_strupcase(char *str)
{
    int index = 0;
    while(str[index] != '\0')
    {
        if(str[index] >= 'a' && str[index] <= 'z')
        {
           //str[index] = toupper(str[index]); change 2
           str[index] = str[index] - ('a' - 'A');
        }
       index++;
    }
    return str;
}

//int main(void) {
//    char src[] = "heLLo WoRd";
//    printf("Result = %s\n",ft_strupcase(src));
//    return 0;
//}
