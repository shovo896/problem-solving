#include<stdio.h> 
int main(){
       int x, y;
       scanf("%d%d",&x,&y);
       int perDay = x / 20;
       int extraSalary=y*perDay*1.5;
       int totalSalary=x+extraSalary;
       printf("%d",totalSalary);
       return 0;
}