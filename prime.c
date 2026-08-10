#include<stdio.h> 

int isPrime(int x ){

    for(int i=2 ; i<=x -1;i++){
        if(x%i==0)
            return 0 ; // is not prime 
    }
    return 1 ; // is prime
}

int main(){
    int x = 57 ; 
   //  printf("%d\n",isPrime(x));
   if (isPrime(x))
        printf("%d is prime\n",x);
    else
        printf("%d is not prime\n",x);
    return 0 ;

}