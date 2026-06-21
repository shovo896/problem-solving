#include<stdio.h> 
int main(){
       int n;
       scanf("%d", &n);
       int freq[n + 1]={0};// all elements zero
       for (int i = 0; i < n - 1;++i){
              int  num ;
              scanf("%d",&num);
              freq[num]=1 ; // mark the number as present
              
       }
}
       