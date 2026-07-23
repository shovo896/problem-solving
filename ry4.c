#include<stdio.h> 
#include<string.h>
int main(){
       int n;
       int ans = 0;
       scanf("%d",&n);
       for (int a = 1; a <= n;a++){
              for (int b = a;b <= n;b++){
                     for (int c = b; c <= n; c++){
                            printf("%d %d %d\n",a,b,c);
                            if (a*a +b*b ==c*c){
                                   ans = ans + 1;
                            }
                     }
              }
              printf("%d\n",ans);
              return 0;
       }
}