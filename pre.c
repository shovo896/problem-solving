#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int n ;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int a ; 
            scanf("%d",&a);
            int b = n+1-a ;
            printf("%d%c ",b,(i==n-1?'\n':' '));
        }
    }
    return 0 ;
}
        
