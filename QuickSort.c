
#include "swap.c"

void quicksort(int v[], int left, int right);

/**
 * @brief Quick sort algorithm using the middle element as pivot.
 *
 * @param v  Array to be sorted.
 * @param left  Left index of the array.
 * @param right Right index of the array.
 */
void quicksort(int v[], int left, int right) {

    int i, last;
    void swap(int v[], int i, int j);

    // Base case of recursion.
    // If there is only one element in the array:
    if (left >= right)
        return;

    // Partition the array.
    swap(v, left, (left + right) / 2);
    last = left; // move the pivot to v[0] position.

    for (i = left + 1; i <= right; i++)
        if (v[i] < v[left])
            swap(v, ++last, i);

    swap(v, left, last); // move the pivot to its final position.
    quicksort(v, left, last - 1);
    quicksort(v, last + 1, right);
}