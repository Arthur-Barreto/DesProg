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
/* 

int v[] = {11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, 33, 35};
n = 16;
q = 29;

l = 0, r = 15
m = 7
m[7] = 22

l = 8

m = (8+15)/2 = 11
m[11] = 28 < 29
l = 12

m = (12+15)/2 = 13
m[13] = 31 > 29
r = 12

m[12] = 29


*/

/*
= 2
<= 1
- 1

log_2(n)
<=
=
+
/
==
<
=
+
=
-total = 10 (log_2(n) + 1) + 4 = 10log_2(n) + 14


*/