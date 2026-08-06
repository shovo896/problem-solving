#include<stdio.h>
#include<string.h>
int main(){
    int t ;
    scanf('%d', &t);
    while(t--){
        int n ;
        char s[105];
        scanf("%d",&n);
        scanf("%s",s);
        int hasZero=0 ;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                hasZero=1 ;
                break ;
            }
        }
if(hasZero){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0 ;
}