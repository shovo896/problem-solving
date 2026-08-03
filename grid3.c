#include<stdio.h> 
#include<string.h>
int main(){
    char st[3][4];
    
    for (int i =0 ;i <3 ;i++){
        scanf("%s",st[i]);
    }
    int sum = 3 *('a'+'b'+'c')+'?';
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum -= st[i][j];
        }
    }
    printf("%c\n",sum);

    
}