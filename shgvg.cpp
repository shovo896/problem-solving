#include<iostream>
using namespace std;
int isPalindrome(int *arr, int n){
    for(int i = 0; i < n / 2; i++){
        if(arr[i] != arr[n - i - 1]){
            return 0;
        }
    }
    return 1;
}