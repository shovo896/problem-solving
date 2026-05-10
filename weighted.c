#include<stdio.h> 
int main(){
       int w1,q1,w2,q2;
       scanf("%d%d%d%d",&w1,&q1,&w2,&q2);
       float ans= (float)(w1*q1+w2*q2)/(q2+q1);
       printf("%.2f",ans);
       return 0;


}