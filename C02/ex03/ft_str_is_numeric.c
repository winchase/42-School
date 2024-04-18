
#include <stdio.h>
//#include <ctype.h>

int ft_str_is_numeric(char *str)
{
    if(*str == '\0')
    {
        return 1; 
    }

    while(*str)
    {
        if(!(*str >= '0' && *str <= '9'))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

//int main(void) {
//    char src[] = "";
//    printf("Result = %d\n",ft_str_is_numeric(src));
//    return 0;
//}
