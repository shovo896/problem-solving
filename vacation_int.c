#include<stdio.h> 
#include<string.h>
int main(){
    int n,d ; 
    scanf("%d %d",&n,&d);
    char st[n][d+1];
    scanf("%s",st);

    char st[d+1];
    for(int j=0;j<d;j++){
        st[j]='0';
        
        for(int i=0;i<n;i++){
            st[j]=(x||0);
        
        }
        
    }
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