#include<stdio.h> 
int main(){
       int n ;
       scanf("%d",&n);
       int arr[n];

       for (int i=0;i<n;++i){
              scanf("%d",&arr[i]);
       }
       int odd = 0, even = 0;
       for (int i = 0; i < n;i+=2){
              odd += arr[i];
       }
       for (int i = 1; i < n;i+=2){
              even += arr[i];
       }
       printf("Sum of odd-indexed elements: %d\n", odd);
       printf("Sum of even-indexed elements: %d\n", even);
}