#include<stdio.h> 

void isPlaindrome(int* arr,int n){
    for(int i=0 ;i <n/2;i++){
        // i <----> n-i-1 ei duita soman 
        if(arr[i]!=arr[n-i-1]){ 
            // If any pair doesn't match, it's not a palindrome
            return 0 ;
        }
    }
    return 1 ;// no mismatch found 

    }
}

int main(){
    int n = 5 ; 
    int arr[]={5,4,3,2,1}; 
    printf("%d\n",isPlaindrome(arr,n));
    return 0 ; 
    
    }
