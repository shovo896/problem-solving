#include<stdio.h>
int main(){
    int a = 5 , b=9 ; 
    printf(" a=%d , b=%d\n",a,b); 
    int c = a ; 
    //  a is now free 
    a = b ; 
    // b is now free 
    b = c ; 
    printf(" a=%d , b=%d\n",a,b); 
    return 0 ;
/// bam pashe jeta seta free 

}