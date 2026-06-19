#include <stdio.h>
int main(){
    int W ,H ; 
    scanf("%d%d",&W,&H);

    if (60 <= W && 130 >= H ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}