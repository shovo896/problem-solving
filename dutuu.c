#include<stdio.h>

int main()
{
    int arr[3]={1,2,3};
    int *p=arr;
    for (int i=0;i<3;i++)
    {
        printf("arr[%d]=%d\n (via pointer : %d)\n",i,arr[i],*(p+i));
    }
    return 0;
}