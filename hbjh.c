#include<stdio.h>
#include<string.h>
int main(){
       char sr[3][4];
       for (int i = 0; i < 3;i++){
              scanf("%s",sr[i]);
       }
       for (int i = 0; i < 3;i++){
              if (sr[0][0] !='a' && sr[0][1]!='a' && sr[i][2]!='a'){
                     printf("%s\n",sr[i]);
              }
       }
       return 0;
}