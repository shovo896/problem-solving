#include<stdio.h>
int main (){
    int x ,y;
    scanf("%d",&x);
    scanf("%d",&y);


    if (x>y){
        if (y-x <= 2 )
        printf("Yes\n");
        else
        printf("No\n");
    
    }
    if (y>x){
        if (x-y <= 2 )
        printf("Yes\n");
        else
        printf("No\n");
    
    }
    if (x==y){
        printf("No\n");
    }
    return 0;
}   

  