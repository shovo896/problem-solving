#include<stdio.h> 
int main(){
    int n ;
    scanf("%d",&n);

    if (n<1000) 
    printf("%d\n",n);
    else if (n<10000) printf("%d\n",n-n%10);
    else if (n<100000) printf("%d\n",n-n%100);
    else if (n<1000000) printf("%d\n",n-n%1000);
    else if (n<10000000) printf("%d\n",n-n%10000);
    else if (n<100000000) printf("%d\n",n-n%100000);
    else if (n<1000000000) printf("%d\n",n-n%1000000);
    else if (n<10000000000) printf("%d\n",n-n%10000000);
    else if (n<100000000000) printf("%d\n",n-n%100000000);
    else if (n<1000000000000) printf("%d\n",n-n%1000000000);
    else if (n<10000000000000) printf("%d\n",n-n%10000000000);
    else if (n<100000000000000) printf("%d\n",n-n%100000000000);
    else if (n<1000000000000000) printf("%d\n",n-n%1000000000000);
    else if (n<10000000000000000) printf("%d\n",n-n%10000000000000);
    else if (n<100000000000000000) printf("%d\n",n-n%10000000000000);
    else if (n<10000000000000000) printf("%d\n",n-n%1000000);

     return 0;  
    }