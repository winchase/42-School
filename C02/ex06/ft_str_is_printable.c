
#include <stdio.h>
#include <ctype.h>

int ft_str_is_printable(char *str)
{
    if(*str == '\0')
    {
        return 1;
    }
    while(*str)
    {
        //if (!isprint(*str)) change 2, use ctype.h library
        if(!(*str >= 32 && *str <= 126))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

//int main(void) {
//    char src[] = "HELL0, word2424234";
//    printf("Result = %d\n",ft_str_is_printable(src));
//    return 0;
//}
