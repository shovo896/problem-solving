#include<stdio.h> 
int isPalindrome(int x){
    if (x==numRev(x))
        return 1 ; 
    else
        return 0 ;

}

int main(){
    printf("%d\n",isPalindrome(12321));
    return 0 ;
}