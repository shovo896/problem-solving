#include<stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
        printf("%d\n", *(arr + i));
    }

    int n = 5;
    for(int i = 0; i < n / 2; i++){
        swap(&arr[i], &arr[n - i - 1]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }

    printf("\n");

    return 0;
}
