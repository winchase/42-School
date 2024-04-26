#include <stdio.h>

int ft_strlen(char *str)
{
    int index = 0;

    while (str[index] != '\0')
    {
        index++;
    }

    return index;
}


int main() {
    char *str = "Hello";
    int result = ft_strlen(str);

    printf("Result = %d", result);

    return 0;
}

