#include<stdio.h>
int main(){
       char str[20];
       scanf("%s", str);
       int n=strlen(str);
       int i =0 ,j=n-1 ;
       while(i<=j){
              printf("%d-> %c\n", i, str[i]);
              printf("%d-> %c\n", j, str[j]);
              char temp=str[i];
              str[i]=str[j];
              str[j]=temp;
              i++;
              j--;
       }
       printf("%s\n", str);

}