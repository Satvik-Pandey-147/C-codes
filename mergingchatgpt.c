#include <stdio.h>

void print(int size, int grade[]) {
    for (int i = 0; i < size; i++)
        printf("%d\t", grade[i]);
    printf("\n");
}

void merge(int a[], int b[], int c[], int m, int n) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < m)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];
}

void mergesort(int a[], int size) {
    int w[size];
    for (int width = 1; width < size; width *= 2) {
        for (int i = 0; i < size; i += 2 * width) {
            int mid = i + width < size ? i + width : size;
            int end = i + 2 * width < size ? i + 2 * width : size;
            merge(a + i, a + mid, w + i, mid - i, end - mid);
        }
        for (int i = 0; i < size; i++)
            a[i] = w[i];
    }
}

int main() {
    const int size = 10;
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    printf("Before sorting:\n");
    print(size, a);

    mergesort(a, size);

    printf("After sorting:\n");
    print(size, a);

    return 0;
}
