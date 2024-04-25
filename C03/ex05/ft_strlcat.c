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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int indexdest = 0;
    int indexsrc = 0;

    int size_dest = ft_strlen(dest);
    int size_src = ft_strlen(src);
    int concateDS = size_dest + size_src;


    while (dest[indexdest] != '\0')
    {
        indexdest++;
    }

    while (src[indexsrc] != '\0' && (indexdest <(int) size - 1))
    {
        dest[indexdest] = src[indexsrc];
        indexdest++;
        indexsrc++;
    }
    dest[indexdest] = '\0';

    if (size_dest >=(int)size)
    {
        return size + size_src;
    }
    return concateDS ;
}

int main() {
    char dest[20] = "Hello";
    char *src = " Word";
    int size = 8;
    printf("Original dest = %s\n", dest);
    printf("Src = %s\n", src);

    
    int result = ft_strlcat(dest, src, size);

    printf("Dest after strlcat = %s\n", dest);
    printf("Total length expected = %d\n", result);

    return 0;
}
