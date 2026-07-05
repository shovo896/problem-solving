#include<stdio.h> 
int main(){
       int arr[n][n];
       for (int i = 0; i < n;i++){
              for (int j = 0; j < n;j++){
                     scanf("%d", &arr[i][j]);
              }
       int primary=0 ,secondary=0;
       for (int i = 0;i<n;i++){
              primary += arr[i][i];
       }
       for (int i = 0, j = n - 1; i < n && j >= 0; ++i, --j)
       {
              secondary += arr[i][j];
       }
       int ans = 0;
       if (primary > secondary){
              ans = primary - secondary;
       }
       else {
              ans = secondary - primary;
       }
       printf("%d\n", ans);
}
printf("%d\n", ans);
}")
}