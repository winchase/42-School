#include <unistd.h>
#include <ctype.h>
#include <stdio.h>


void    ft_swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
//int main(void)
//{

   // int a = 10;
  //  int b = 15;

//    printf("Before: %d,%d\n",a,b);
//    ft_swap(&a, &b);
//    printf("After: %d,%d\n",a,b);

//    return 0;
//}
