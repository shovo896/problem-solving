#include<stdio.h> 
int main(){
    int a = 5 , b=9 ; 
    printf(" a=%d , b=%d\n",a,b);
    int *p1=&a , *p2=&b ;
    printf(" a=%d , b=%d\n",*p1,*p2);
    *p1=10 ;
    printf(" a=%d , b=%d\n",*p1,*p2);
}