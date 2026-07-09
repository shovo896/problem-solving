#include<stdio.h>
#include<string.h> 
int main(){
       char str1[20], str2[20];
       scanf("%s", str1);
       int cnt[26]={0};
       for (int i = 0; str1[i] != '\0';i++){
              int x = str1[i] - 'a';
              cnt[x]++;
       }
       for (int i = 0;i<26;i++){
              printf("%c->%d\n", i+'a', cnt[i]);
       }
}