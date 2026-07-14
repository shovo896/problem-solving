#include<stdio.h>
int main(){
       char s[17];
       scanf("%s",s);
       for (int i = 1; i < 16;i++){
              if (s[i] != '0' ){
                     printf("No\n");
                     return 0;
              }
       }
       printf("Yes\n");
       return 0;
}