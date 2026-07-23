#include<stdio.h> 
#include<string.h>
int main(){
       char names[3][6];
       char st[6];
       scanf("%s",st);
       printf("%s\n",st);
       for (int i = 0; i < 3; i++){
              scanf("%s",names[i]);
       }
       for (int i = 0; i < 3;i++){
              printf("%s\n",names[i]);
       }
}