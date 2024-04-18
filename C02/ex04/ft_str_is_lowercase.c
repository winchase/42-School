
#include <stdio.h>
#include <ctype.h>

int ft_str_is_lowercase(char *str)
{
    if(*str == '\0')
    {
        return 1;
    }
    while(*str)
    {
        //if (!islower(*str)) change 2, use ctype.h library
        if(!(*str >= 'a' && *str <= 'z'))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

//int main(void) {
//    char src[] = "sdfsdfsd";
//    printf("Result = %d\n",ft_str_is_lowercase(src));
//    return 0;
//}
