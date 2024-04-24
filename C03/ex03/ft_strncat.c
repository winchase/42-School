#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int indexDest =0;
  unsigned  int indexSrc = 0;
    while (dest[indexDest] != '\0')
    {
        indexDest++;
    }

    while (src[indexSrc] != '\0' && indexSrc < nb )
    {
        dest[indexDest] = src[indexSrc];
        indexDest++;
        indexSrc++;
    }

    dest[indexDest] = '\0';
    return dest;
}

int main() {
    char dest[50] = "Hello";
    char *src = "World";

    printf("Original dest = %s\n", dest);
    printf("Src = %s\n", src);

    char *result = ft_strncat(dest,src,3);

    printf("Result after strcat = %s\n",result);

    return 0;
}
