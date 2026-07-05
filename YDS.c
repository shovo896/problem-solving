#include<stdio.h>
int main(){
       int n ;
       scanf("%d", &n);
       int arr[n][n];

       for (int i = 0; i < n;++n){
              for (int j = 0; j < n;++j){
                     scanf("%d", &arr[i][j]);
              }
       }
       int primary = 0, secondary = 0;
       for (int i = 0; i < n;i++){
              primary += arr[i][i];
       }
       for (int i = 0, j = n - 1, i < n, i++, j--)
       {
              secondary += arr[i][j];
       }
       
       printf("Primary diagonal sum: %d\n", primary);
       printf("Secondary diagonal sum: %d\n", secondary);
}