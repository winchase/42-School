#include <stdio.h>


char *ft_strcat(char *dest, char *src)
{
    int index = 0;
    int indexsrc = 0;
    while (dest[index] != '\0')
    {
        index++;
    }


    while(src[indexsrc] != '\0')
    {
        dest[index] = src[indexsrc];
        index++;
        indexsrc++;
    }
    dest[index] = '\0';

    return dest;
}


int main() {
    char dest[50] = "Hello";
    char *src = "world";

    printf("Original dest = %s\n", dest);
    printf("Src = %s\n", src);

    char *result = ft_strcat(dest,src);

    printf("Result after strcat = %s\n",result);

    return 0;
}
