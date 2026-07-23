#include<stdio.h> 
#include<string.h>
int main(){
       int n;
       scanf("%d",&n);
       for (int a = 1; a <= n;a++){
              for (int b = a;b <= n;b++){
                     for (int c = b; c <= n; c++){
                            printf("%d %d %d\n",a,b,c);
                     }
              }
              printf("\n");
       }
}