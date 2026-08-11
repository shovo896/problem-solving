#include<stdio.h> 


void fun(int* arr) {

    //printf("%d\n", *(arr+1));

    printf("%d\n", arr[1]);
}
int main(){
    int arr[5] = {1,2,3,4,5} ; 
    printf("%d\n", arr[4]);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[2] + 2);

    // passing array 
    fun(arr);

    return 0 ;


}