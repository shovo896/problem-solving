#include<stdio.h> 
int main(){
    int t ; 
    scanf("%d",&t);
    
    while(t--){
        int n ; 
        scanf("%d",&n);
        if (n==1){
            printf("1\n");
            continue;
        }
        for(int i=2 ;i<=n;i++){
            printf("%d ",i);
        }
        printf("1\n");
    }
    return 0 ;
    }
