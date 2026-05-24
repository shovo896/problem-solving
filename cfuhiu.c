# include <stdio.h>
int main(){
    long long  T,A,K;
    scanf("%lld %lld %lld",&T,&A,&K);
    if (T>K){
        printf("%d %d\n",T-A,K);
    }
    else if (K >= (T+K)){
        printf("0 0 \n");
    }
    else{
        printf("0 %11d\n",A-(T+K));
    }
    return 0;
    }

