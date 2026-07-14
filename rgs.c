#include<stdio.h>
int main(){
       char s[101];
       scanf("%s",s);
       int len = strlen(s);
       for (int i = 0; i < len - 1; i++){
              printf("%c",s[i]);
       }
       printf("%c\n", s[len - 1]);
       return 0; 
}