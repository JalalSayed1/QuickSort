void swap(int v[], int i, int j);

/**
 * @brief swap two elements in an array.
 *
 * @param v Array to be used
 * @param i Index of the first element
 * @param j Index of the second element
 */
void swap(int v[], int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
