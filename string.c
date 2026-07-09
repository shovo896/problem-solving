#include<stdio.h> 
#include<string.h>
int main(){
       char str[20],copy[20];
       scanf("%s", str);
       int n = strlen(str);
       strcpy(copy, str);
       for (int i = 0, j = n - 1; i < j; i++, j--){
              char tmp=copy[i];
              copy[i]=copy[j];
              copy[j]=tmp;
       }
       // strcmp (str1 ,str2)
       int x = strcmp(str, copy);
       if (x == 0){
              printf("Palindrome\n");
       }
       else{
              printf("Not Palindrome\n");
       }
}