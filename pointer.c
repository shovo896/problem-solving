#include<stdio.h> 
int main(){
    int a = 10 ; 
    printf("%d\n",a); 
    printf("%p\n",(void*)&a); 

    int *b=&a ; 
    printf("%d\n",*b);
    printf("%p\n",(void*)b);
    printf("%p\n",(void*)&b); 
    return 0 ;

}