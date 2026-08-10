#include<stdio.h> 

int numRev(int x){
    int y = 0;

    while(x > 0){
        int lastDigit = x % 10;
        y = y * 10 + lastDigit;
        x /= 10;
    }

    return y;
}

int isPalindrome(int x){
    if (x == numRev(x))
        return 1; // is palindrome
    else
        return 0 ;

}

int main(){
    printf("%d\n",isPalindrome(12321));
    return 0 ;
}