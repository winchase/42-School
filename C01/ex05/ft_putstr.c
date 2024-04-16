#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

void    ft_putstr(char *str)
{
    write(1 ,str, 14);
}


//int main(void)
//{
//
//    ft_putstr( "hello word\n");
//
//    return 0;
//}
