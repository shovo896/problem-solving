#include<stdio.h>
int main(){
       int n,k ;
       scanf("%d", &n);
       int  arr[n];
       for (int i = 0;i<n;i++){
              scanf("%d",&arr[i]);
       }
       int x = n-k;
       for (int i = x; i < n;++i){
              printf("%d ", arr[i]);
       }
       for (int i = 0; i < x;++i){
              printf("%d ", arr[i]);
       }
}