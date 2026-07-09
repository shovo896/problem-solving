#include<stdio.h>
#include<string.h>
int main(){
       char str[20],copy[20];
       scanf("%s", str);
       int n=strlen(str);
       for(int i=0,j=n-1;i<n;i++,j--){
              copy[i]=str[j];
       }
       copy[n]='\0';
       printf("%s\n",copy);
}