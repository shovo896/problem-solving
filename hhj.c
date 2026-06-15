#include<stdio.h> 
int main(){
    int x;
    scanf("%d",&x);
    for (int i=1 ;i*i<=x;i++){
        if (x%i==0){
            printf("%d ",i);
            if (i*i!=x){
                printf("%d ",x/i);
            }
        }
    }
    return 0;

}