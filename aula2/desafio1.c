#include <stdio.h>

int soma_doida(int v[], int l, int r) {
    if (l == r) {
        return v[l];
    }
    int meio = (l + r) / 2;
    return soma_doida(v, l, meio) + soma_doida(v, meio + 1, r);
}

int soma(int v[], int n) {
    return soma_doida(v, 0, n - 1);
}

int main() {

    int v[] = {1, 2, 3, 4};
    int s = soma(v, 4);
    printf("A soma dos elementos é: %d\n", s);
    return 0;
}