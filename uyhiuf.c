#include<stdio.h> 
void A(int* a ){ // pass by value 
    *a =10 ; 
}

void AFailed(int a ){
    a = 10 ;  
}
int main(){
    int a = 5 ; 
    A(&a);
    printf("%d",a);
    return 0 ;
}