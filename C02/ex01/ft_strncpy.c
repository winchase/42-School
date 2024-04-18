#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  int index = 0;
    while (src[index] != '\0' && index < n)
    {
        dest[index] = src[index];
        index ++;
    }
    dest[index] = '\0';
    return dest;
}

//int main(void) {
//    char src[] = "Hello word!";
//    char dest[100];
//    ft_strcpy(dest,src, 8);
//    printf("Copied string: %s\n",dest);
//    return 0;
//}
