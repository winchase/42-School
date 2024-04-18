
#include <stdio.h>
#include <ctype.h>

int ft_str_is_uppercase(char *str)
{
    if(*str == '\0')
    {
        return 1;
    }
    while(*str)
    {
        //if (!isupper(*str)) change 2, use ctype.h library
        if(!(*str >= 'A' && *str <= 'Z'))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

//int main(void) {
//    char src[] = "HELL";
//    printf("Result = %d\n",ft_str_is_uppercase(src));
//    return 0;
//}
