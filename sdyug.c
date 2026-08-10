#include<stdio.h> 
int main(){
    int a = 10;
    int *ptr = &a; // pointer to integer
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of ptr (address of a): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // Modifying the value of a using pointer
    *ptr = 20;
    printf("New value of a after modification through pointer: %d\n", a);
    
    return 0;
}