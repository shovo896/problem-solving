#include<stdio.h>
int main(){
       char s[101];
       scanf("%s",s);
       int i = 0;
       while(s[i] !=0 )
              i++;
       s[i - 1] = '4';
       printf("%s\n",s);
       return 0;
       
}