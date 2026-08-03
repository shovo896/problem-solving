#include<stdio.h>
#include<string.h>`
int main(){
    char st[3][4];
    for (int i = 0; i < 3;i++){
        scanf("%s",st[i]);
    }
   for(int i=0 ;i<3;i++){
     if(st[i][0]=='a' && st[i][1]=='a' && st[i][2]=='a'){
        printf("%s\n",st[i]);
     }
     if(st[i][0]=='b' && st[i][1]=='b' && st[i][2]=='b'){
        printf("%s\n",st[i]);
     }
     if(st[i][0]=='c' && st[i][1]=='c' && st[i][2]=='c'){
        printf("%s\n",st[i]);
     }
   }

    return 0;
}