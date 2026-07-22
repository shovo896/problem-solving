#include<stdio.h>
int main(){
       char names[3][6];
       for (int i = 0;i<3;i++){
              scanf("%s",names[i]);
       }
       for (int i = 0; i < 3; i++){
              printf("%s\n",names[i]);
       }
}