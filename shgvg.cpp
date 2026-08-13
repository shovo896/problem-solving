#include <iostream>
using namespace std;
int isPalindrome(int *arr, int n){
    for(int i = 0; i < n / 2; i++){
        if(arr[i] != arr[n - i - 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};

    if (isPalindrome(arr, n)){
        cout << "The array is a palindrome.\n";
    } else {
        cout << "The array is not a palindrome.\n";
    }

    return 0;
}
