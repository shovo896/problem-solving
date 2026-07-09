#include<stdio.h>
int main(){
       char str[20];
       scanf("%s", str);
       int n=strlen(str);
       int l, r;
       for(int i=n-1;i>=0;i--){
              printf("%c", str[i]);
       }
       for(int i=0;i<n;i++){
              printf("%c", str[i]);
       }
       return 0;
}