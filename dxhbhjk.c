#include<stdio.h> 
int main(){

    void swap(int *a , int *b){
        int tmp = *a ;
        *a = *b ;
        *b = tmp ; 
    }



    int arr[5] = {1,2,3,4,5} ; 
    for(int i=0 ;i<5 ; i++){
        printf("%d\n", arr[i]);
    printf("%d\n", *(arr+i));
    }
    // reverse  part 
    int n = 5;
    for(int i =0 ;i<n/2 ;i++){
        int tmp=arr[i] ;
        arr[i]=arr[n-i-1];
        arr[n-i-1]=tmp; 
    }

    }
        
    

    for(int i = 0 ;i<5 ;i++){
        printf("%d\n",arr[i]); 

    printf("\n");
    }





    return 0 ;
    }
