#include <iostream>
using namespace std; 
void SWAP(int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

int main(){
    int a =5 ,b= 10 ; 
    cout << "Before swapping: a = " << a << ", b = " << b << endl; 
    SWAP(a,b);
    cout << "After swapping: a = " << a << ", b = " << b << endl; 
    return 0;
}