#include<stdio.h> 
#include<string.h>
#include<math.h>
int main(){
       int n;
       int ans = 0;
       scanf("%d",&n);
       for (int a = 1; a <= n;a++){
              for (int b = a;b <= n;b++){
                     int sq_c = a * a + b * b;
                     int c = sqrt(sq_c);
                     if (c*c == sq_c){
                            ans = ans + 1;
                     }
                     }
              }
              printf("%d\n",ans);
              return 0;
       }
