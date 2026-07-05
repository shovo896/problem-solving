#include <stdio.h>
int main(){
    int N ; 
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i < N-1; i++){
        if(A[i] == A[i+1]){
            for(int x=A[i];x<=A[i+1];x++){
                printf("%d ",x);
            }
        else {
            for (int x =A[i]; x>=A[i+1];x--){
                printf("%d ",x);
            }
            }
        }
    }
    printf("%d ",A[N-1]);
        printf("\n");
        return 0;
        
    }
