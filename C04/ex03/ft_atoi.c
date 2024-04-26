#include <stdio.h>

int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r')
    {
        str++;
    }

    while (*str == '-' || *str == '+')
    {
       if(*str == '-')
       {
           sign = -sign;
       }
       str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}

int main() {
    char str[] = "  ---+--+1234ab567";
    //int result = ft_strlen(str);
    //ft_putnbr(42);
    // ft_putstr(str);
    // printf("Result = %d", result);
    printf("Converted number: %d\n", ft_atoi(str));

    return 0;
}
