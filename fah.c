#include<stdio.h> 
int main(){
       int h, w;
       scanf("%d %d", &h, &w);
       char arr[h][w];
       for (int i = 0; i < h; ++i){
              for (int j = 0; j < w; ++j){
                     scanf(" %c", &arr[i][j]);
              }
              getchar();
              for (int i = 0; i < h; ++i)
              {
                     for (int j = 0; j < w; ++j)
                     {
                            printf(" %c", &arr[i][j]);
                     }
                     printf("\n");
              }
}
}
