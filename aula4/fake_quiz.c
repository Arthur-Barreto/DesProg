int busca_binaria(int v[], int n, int q) {
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (v[m] == q) {
            return m;
        }
        if (v[m] < q) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

int v[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 29, 30};
int q = 10;

/*
l = 0
r = 15

while (0<=15){
    m = 7
    v[7] = 16
    16 > q = 10
    r = 6
    -------
    m = 3
    v[3] = 8
    8 < 10 = q
    l = 4
    --------
    m = 4
    v[4] = 10 = q
    return 5
}

*/