#include<stdio.h> 
int main(){
       int arr[n*7];
       for (int i = 0; i < n*7; ++i){
              scanf("%d",&arr[i]);
       }
       for (int week = 1; week <= n;week++){
              int ans_for_this_week = 0;
              int start =(week-1)*7;
              for (int i = 0; i < 7;++i){
                     ans_for_this_week += arr[start+i];
              }
              printf("Answer for week %d: %d\n", week, ans_for_this_week);
       }
}