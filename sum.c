#include<stdio.h> 
int sodSUM(int x){
    int sodSUM= 0 ; 
    // 247 
    // +7 
    // 24 
    // +4
    // 2 
    // +2
    // 0 
    while(x>0){
        int lastDigit = x%10 ;
        sodSUM += lastDigit ;
        x/=10 ;
    }
    return sodSUM ;
}


int main(){
    printf("%d\n",sodSUM(247));
    return 0 ;
}