#include<stdio.h>
#include<string.h>
int main(){
    char board[8][9];
    for(int i=0 ;i<8;i++){
        scanf("%s",board[i]);
    }
    int xi,xj;
    for(int i =0 ;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j]=='*'){
                xi=i;
                xj=j;
            }
        }
    }
    printf("%c%d\n",xj+'a',8-xi);
}