#include<stdio.h>
int numRev(int x ){
    int y = 0;

    while(x>0){
        int lastDigit = x%10 ;
        y*=10 ;
        y+=lastDigit ;
        x/=10 ;
    }
    return y ;
}

int main(){
    printf("%d\n",numRev(1234));
    return 0 ;
}