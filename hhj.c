#include<stdio.h> 
int main(){
    int x;
    scanf("%d",&x);
    for (int i=1 ;i*i<=x;i++){
        if (x%i==0){
            if(i*i==x){
                printf("%d ",i);
            }
            else{
            printf("%d ",i);
            if (i*i!=x){
                //exact handle perfect square
                
                printf("%d ",x/i);
            }
        }
    }
    return 0;

}