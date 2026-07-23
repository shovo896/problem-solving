#include<stdio.h>
#include<string.h>
int main(){
       char sr[3][4];
       for (int i = 0; i < 3;i++){
              scanf("%c",sr[i]);
       }
       for (int i = 0; i < 3;i++){
              if (sr[i][0] !='a' && sr[i][1]!='a' && sr[i][2]!='a'){
                     printf("%c\n",sr[i]);
              }
              if (sr[i][0] != 'b' && sr[i][1] != 'b' && sr[i][2] != 'b')
                     {
                            printf("%c\n", sr[i]);
                     }
              if (sr[i][0] != 'c' && sr[i][1] != 'c' && sr[i][2] != 'c')
                     {
                            printf("%c\n", sr[i]);
                     }
              }
       }
       return 0;
}