#include<stdio.h> 
int main(){

       int n, m;
       scanf("%d %d", &n, &m);
       int arr[n][m];
       for (int i = 0; i < n; i++) {
              for (int j = 0; j < m; j++) {
                     scanf("%d", &arr[i][j]);


              }
       }
       for (int i = 0; i < n;++i){
              int l = 0, r = m - 1;
              while (l<r){
                     int temp = arr[i][l];
                     arr[i][l] = arr[i][r];
                     arr[i][r] = temp;
                     l++;
                     r--;

              }
       }
}