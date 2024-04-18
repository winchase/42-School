#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
  int index = 0;
    while (src[index] != '\0')
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
//    ft_strcpy(dest,src);
//    printf("Copied string: %s\n",dest);
//    return 0;
//}
