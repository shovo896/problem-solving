#include<stdio.h>
#include<string.h>`
int main(){
    char st[3][4];
    for (int i = 0; i < 3;i++){
        scanf("%s",st[i]);

    }

    for(int i =0 ;i < 3 ;i++){
        int cnt[3]= {0};
        for (int j=0 ; j <3 ;j++){
            if (st[i][j] !='?'){
                cnt[st[i][j]-'a']++;}
        }
    }
        if (cnt[0]==0){
            printf("a\n");
        }
         if (cnt[1]==0){
            printf("b\n");
        }
         if (cnt[2]==0){
            printf("c\n");
        }
    
    

}

