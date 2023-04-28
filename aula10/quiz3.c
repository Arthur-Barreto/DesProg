int v[] = {1, 3, 5, 4, 6, 8};
int l = 0;
int m = 2;
int r = 5;

/*

i = 0
j = 5

i=0, j=3
temp = {1}
    i=1, j=3
temp = {1,3}
    i=2,j=3
temp = {1,3,4}
    i=2,j=4
temp = {1,3,4,5}
    i=3,j=4
temp = {1,3,4,5,6}
    i=3, j=5

*/

void combina(int v[], int temp[], int l, int m, int r) {
    int i = l;
    int j = m + 1;
    int k;

    for (k = l; k <= r; k++) {
        if (i > m) { // Se i estourou, copiamos j.
            temp[k] = v[j];
            j++;
        } else if (j > r) { // Se j estourou, copiamos i.
            temp[k] = v[i];
            i++;
        } else if (v[i] > v[j]) {
            temp[k] = v[j];
            j++;
        } else {
            temp[k] = v[i];
            i++;
        }
    }

    for (k = l; k <= r; k++) {
        v[k] = temp[k];
    }
}
/*
i = l = 0
m = 2
j = 2 + 1 = 3
r = 5

k = [0,5]
    k = 0
        i > m , 0>3 nao
        j > r, 3 > 5, nao
        v[i] > v[j], 1 > 4, nao
        temp[0] = v[0], temp = {1}
        i++, i = 1
        resp : i=1 e j=3
    k = 1
        i > m, 1>3 nao
        j > r, 3>5, nao
        v[i]>v[j], 3>4, nao
        temp[1] = v[1], temp = {1,3}
        resp: i=2 e j=3
    k = 2
        i>m, 2>2, nao
        j>r, 3>5, nao
        v[i]>v[j], v[2]>v[3], 5>4 simm
        temp[2] = v[3], temp = {1,3,4}
        resp: i=2 e j=4
    k = 3
        i>m, 2>
    

*/

int v[] = {6, 8, 2, 3, 1, 4};
int l = 0;
int r = 5;
/*
p = 0, v = {6, 8, 2, 3, 1, 4}
p = 1, v = {2, 8, 6, 3, 1, 4}
p = 2, v = {2, 3, 6, 8, 1, 4}
p = 3, v = {2, 3, 1, 8, 6, 4}
*/