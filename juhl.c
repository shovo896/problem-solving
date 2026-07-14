#include<stdio.h> 
int main(){
       int t ;
       scanf("%d", &t);

       while(t--){
              char s[4];
              scanf("%s",s);
              int mismatch = 0;

              if(s[0] !='a'){
                     mismatch++;
              }
              if (s[1] !='b'){
                     mismatch++;
              }
              if (s[2] !='c'){
                     mismatch++;
              }
              if(mismatch==0 || mismatch==2){
                     printf("YES\n");
              }
              else{
                     printf("NO\n");
              }
       }
}