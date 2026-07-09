#include<stdio.h>
#include<string.h>

int main(){
       char str[20], copy[20];
       scanf("%s", str);
       int n = strlen(str);
       for (int i = n - 1, j = 0; j < n - 1; i--, j++){
              copy[j] = str[i];
       }
       copy[n - 1] = '\0';
       printf("%s\n", copy);
}