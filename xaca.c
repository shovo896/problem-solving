#include<stdio.h>
#include<string.h>   
int main(){
       char st1[20], st2[20];
       scanf("%s", st1);
       scanf("%s", st2);
       int x =strcmp(st1, st2);
       printf("%d\n", x);

}