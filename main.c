//* gcc -o output main.c && output

#include "QuickSort.c"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int v[] = {5, 4, 3, 2, 1};
    quicksort(v, 0, 4);
    for (int i = 0; i < 5; i++)
        printf("%d ", v[i]);
    return 0;
}
