#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size -1;

    while (start < end)
    {
        int temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;

        start++;
        end--;
    }
}

int main(void)
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ft_rev_int_tab(arr,size);

    for (int i = 0; i < size; ++i) {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

