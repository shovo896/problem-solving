#include<stdio.h>
int main(){
       int t; 
       scanf("%d",&t);
       while(t--){
              int n;
              scanf("%d",&n);
              for (int i = 0; i < n;i++){
                     int ai;
                     scanf("%d",&ai);
                     printf("%d\n",n+1-ai);
              }
              printf("\n");
       }
       return 0;
}