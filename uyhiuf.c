#include<stdio.h> 
void A(int* a ){
    *a =10 ; 
}
int main(){
    int a = 5 ; 
    A(&a);
    printf("%d",a);
    return 0 ;
}