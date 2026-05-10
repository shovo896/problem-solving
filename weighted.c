#include<stdio.h> 
int main(){
       int n,m;
       scanf("%d%d",&n,&m);
       int sum=0;
       for(int i=0;i<n;i++){
              int w,v;
              scanf("%d%d",&w,&v);
              if(w<=m){
                     sum+=v;
              }
       }
       printf("%d",sum);
       return 0;

}