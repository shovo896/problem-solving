#include<stdio.h> 
int main(){
       int w1,q1,w2,q2;
       scanf("%d%d%d%d",&w1,&q1,&w2,&q2);
       int ans=(w1*q1+w2*q2)/(q2+q1);
       printf("%d",ans);
       return 0;


}