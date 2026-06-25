#include<stdio.h>
int main(){
       int brr[4][3];
       for (int r = 0; r < 4;++r){
              for (int c = 0; c < 3;++c){
                     printf("Enter element at position [%d][%d]: ", r, c);
                     scanf("%d", &brr[r][c]);
              }
       }
       int sum = 0;
       for (int r = 0; r < 4;++r){
              int row_sum = 0;
              for (int c = 0; c < 3;++c){
                     row_sum += brr[r][c];
              }
              sum += row_sum;
       }
       printf("Sum of all elements: %d\n", sum);
       return 0;
}