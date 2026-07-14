#include<stdio.h> 
#include<string.h>
int main(){
       char s[6];
       scanf("%s",s);
       int len = strlen(s);
       for (int i = 0;i< len-1 ; i++){
              if(s[i] <= s[i+1]){
                     printf("No\n");
                     return 0;
              }
              printf("Yes\n");
       }
       return 0;
}