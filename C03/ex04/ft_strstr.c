#include <stdio.h>

char *ft_strstr(char *str,char *to_find)
{
    int indexstr = 0,indexfind = 0;

    if (*to_find == '\0')
    {
        return str;
    }
    while (str[indexstr] != '\0')
    {
        while (to_find[indexfind] == str[indexstr + indexfind])
        {
            if(to_find[indexfind + 1] == '\0')
            {
                return &str[indexstr];
            }
            indexfind++;
        }
        indexstr++;
    }
    return NULL;
}

int main() {
    char *str = "Hello World";
    char *find = "lo";

    //printf("Original dest = %s\n", dest);
    //printf("Src = %s\n", src);

    char *result = ft_strstr(str,find);

    printf("Result after strcat = %s\n",result);

    return 0;
}
