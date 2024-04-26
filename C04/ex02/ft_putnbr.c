#include <stdio.h>
#include <unistd.h>
void  ft_putnbr(int nb)
{
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    nb = nb % 10 + '0';
    write(1,&nb,1);
}

int main() {
//    char *str = "Hello";
    //int result = ft_strlen(str);
    ft_putnbr(42);
    // ft_putstr(str);
    // printf("Result = %d", result);

    return 0;
}
