
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    div = *a;
    mod = *b;
    *a = div / mod;
    *b = div % mod;
}


//int main(void)
//{
//
//    int a = 20;
//    int b = 3;
//    int res = 0;
//    int mod = 0;
//    //printf("Before: %d,%d\n",a,b);
//    ft_ultimate_div_mod(&a, &b);
//    printf("After: %d,%d,%d,%d\n",a,b,res,mod);
//
//    return 0;
//}
