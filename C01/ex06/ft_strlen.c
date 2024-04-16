#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int count = 0;

    while (str[count])
    {
        count++;
    }
    return  count;
}


//int main(void)
//{
//    int length = ft_strlen("Hello");
//    printf("Length = %d\n", length);
//
//    return 0;
//}
