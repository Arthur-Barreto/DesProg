#include <stdio.h>

int qtd(int n){
    if (n<10){
        return 1;
    }
    return qtd(n/10)+1;
}

int main(){
    printf("Digite um número: ");
    int n;
    scanf("%d",&n);
    printf("%d\n",qtd(n));
}