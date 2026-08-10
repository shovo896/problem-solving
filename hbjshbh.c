#include<stdio.h>

int costomPow(int base ,int power){
    int ans =1 ; 
    for(int i = 1 ;i<=power ;i++){
        ans *= base ; 
    }
    return ans ;
}

int main(){
    printf("%d\n",costomPow(2,3));
    return 0 ;
}


