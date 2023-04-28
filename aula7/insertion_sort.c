#include <stdio.h>
void insertion_sort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = v[i];

        int j = i;
        while (j > 0 && v[j - 1] > temp) {
            v[j] = v[j - 1];
            j--;
        }

        v[j] = temp;
    }
}

int main() {
    int v[] = {5, 1, 9, 7, 3};
    insertion_sort(v, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d\n",v[i]);
    }
}