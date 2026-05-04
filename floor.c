#include<stdio.h>
int main(){
       printf("Enter a number: ");
       long long int x;
       scanf("%lld",&x);
       int wz = x/10;
       printf("%d",x-wz*10);
       return 0;
}