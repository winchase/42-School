#include <stdio.h>

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
    unsigned int index1 = 0;

    if (n == 0)
    {
        return 0;
    }

    while (s1[index1] != '\0' &&  s2[index1] != '\0' && index1 < n - 1)
    {
        if(s1[index1] != s2[index1])
        {
            return 1;
        }
        index1++;
    }

    if(s1[index1] != s2[index1]) {
        return 1;
    }

    return 0;
}


int main() {
    char *str1 = "Hello World";
    char *str2 = "Hello World";

    printf("%d\n",ft_strcmp(str1,str2,1));
    return 0;
}
