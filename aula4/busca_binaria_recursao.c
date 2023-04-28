#include <stdio.h>
int recursiva(int v[], int q, int l, int r) {

    if (l > r) {
        return -1;
    }

    int m = (l + r) / 2;
    printf("m = %d\n",m);
    if (v[m] == q) {
        return m;
    }
    if (v[m] < q) {
        l = m + 1;
        return recursiva(v, q, l, r);
    } else {
        r = m - 1;
        return recursiva(v, q, l, r);
    }
}

int recursiva_busca_binaria(int v[], int n, int q) {
    return recursiva(v, q, 0, n - 1);
}

int main(){
    int v[] = {11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, 33, 35};
    int q = 29;
    recursiva_busca_binaria(v,16,q);
}