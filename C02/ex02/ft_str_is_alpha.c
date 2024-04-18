
#include <stdio.h>
#include <ctype.h>

int ft_str_is_alpha(char *str)
{
    while(*str)
    {
        if(!isalpha(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

//int main(void) {
//    char src[] = "Helloword";
//    printf("Result = %d\n",ft_str_is_alpha(src));
//    return 0;
//}
