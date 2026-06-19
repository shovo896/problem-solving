#include<stdio.h> 
int main(){
       int n; 
       scanf("%d",&n);
       int arr[n];
       int left = 0, right = n - 1;
       while(left < right){

              int temp = arr[left];
              arr[left] = arr[right];
              arr[right] = temp;
              left += 1;
              right -= 1;
       }
       for (int i = 0; i < n; ++i){
              printf("%d ", arr[i]);
       }
}