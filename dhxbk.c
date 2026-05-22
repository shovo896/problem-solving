#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("%d is smaller than %d\n12",a,b);
    }
    else if(a>b)
    {
        printf("%d is smaller than %d\n",b,a);
    }
    else
    {
        printf("Both numbers are equal.");
    }
}