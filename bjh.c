#include<stdio.h> 
int main(){
    int x ;
    scanf("%d",&x);


    int p=x,n=0;
    while(x!=0){
        int last=x%10;
        n=n*10+last;
        x/=10;
    }
    if (p==n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }




    return 0 ;
}