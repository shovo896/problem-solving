#include<stdio.h>
int main(){
       int n;
       scanf("%d",&n);
       char s[101];
       scanf("%s",s);
       for (int i = 0; i < n - 1; i++){
              if(s[i] =='a' && s[i+1]=='b'|| s[i]=='b' && s[i+1]== 'a'){
                     printf("Yes\n");
                     return 0;
              }
       }
       printf("No\n");
       return 0;
}