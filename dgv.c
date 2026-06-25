#include<stdio.h>
int main(){
       int crr[2][3] = {{{1, 2, 3}, {4, 5, 6}},
                        {{1, 2, 3}, {4, 5, 6}}};

       printf("%d\n", crr[1][2]); // This will print the element at row 1, column 2
}