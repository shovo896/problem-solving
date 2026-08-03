#include<stdio.h> 
#include<string.h>
int main(){
    int n,d ; 
    scanf("%d %d",&n,&d);
    char st[n][d+1];
    scanf("%s",st);
    int cur = 0 ,mx=0;
    for(int i=0;i<d;i++){
        if(st[i]=='0'){
            cur++;
            if(cur>mx){
                mx=cur;
            }
        }
        else {
            cur = 0 ; 
        }
    }
    printf("%d\n",mx);
}