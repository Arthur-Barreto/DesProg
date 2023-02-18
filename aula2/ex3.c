#include<stdio.h>

void acumulador(int v[], int n){
    if(n==1){
        return;
    }
    acumulador(v,n-1);
    v[n-1] += v[n-2];
}

int main(){
    int v[] = {1,2,3,4,5};
    int n = 5;
    acumulador(v,n);
    for (int i=0;i<n;i++){
        printf("Valor de v[%d] = %d\n",i,v[i]);
    }
}