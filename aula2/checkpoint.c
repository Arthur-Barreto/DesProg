int pow(int b, int n){
    if(n==0){
        return 1;
    }
    return pow(b,n-1)*b;
}

int soma (int v[], int n){
    if(n==0){
        return 0;
    }
    return soma(v,n-1) + v[n-1];
}

void incrementa(int v[], int l, int r){
    if(l>r){
        return;
    }
    incrementa(v,l+1,r);
    v[l]++;
}

int log2(int n){
    if (n==1){
        return 0;
    }
    return log2(n/2)+1;
}

int simetrico(int v[],int l, int r){
    if (l>=r){
        return;
    }
    return v[l]==v[r] && simetrico(v,l+1,r-1);
}

int main(){
    int v[]={2,3,3,2};
    int a = simetrico(v,0,4);

    return 0;
}