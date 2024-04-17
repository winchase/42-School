#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) {


    int end = size - 1;

    while (end > 0) {
        int start = 0;
        while (start < end) {
            if (tab[start] > tab[start + 1]) {
                int max = tab[start];
                tab[start] = tab[start + 1];
                tab[start + 1] = max;
            }
            start++;

        }
        end--;
    }

}

//int main(void) {
//    int arr[] = {4, 3, 5, 1, 2};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    ft_sort_int_tab(arr, size);
//
//    for (int i = 0; i < size; ++i) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
