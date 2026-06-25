#include<stdio.h>
int main(){
       int crr[4][2][3];
       int i = 2;
       int k = i++;
       k = ++i;
       for (int i = 0; i < 4;i++){
              for (int j = 0; j < 3;j++){
                     for (int k = 0; k < 3;++k){
                            scanf("%d", &crr[i][j][k]);
                     }
              }
       }
       for (int i = 0; i < 4;i++){
              for (int j = 0; j < 2;j++){
                     for (int k = 0; k < 3;++k){
                            printf("%d ", crr[i][j][k]);
                     }
                     printf("\n");
              }
              printf("\n");
       }
}