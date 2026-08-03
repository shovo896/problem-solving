#include<stdio.h> 
#include<string.h>
int main(){
    int d ; 
    scanf("%d",&d);
    char st[d+1];
    scanf("%s",st);
    int cur = 0 ,mx=0;
    for(int i=0;i<d;i++){
        if(st[i]=='0'){
            cur++;
            if(cur>max){
                mx=cur;
            }
        }
        else {
            cur = 0 ; 
        }
    }
    printf("%d\n",mx);
}