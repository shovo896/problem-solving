#include<stdio.h> 
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int n ;
        scanf("%d",&n);
        int a[n];
        scanf("%d",&n);

        int a[n];
        int freq[n+1];

        for (int i=0;i<n;i++){
            freq[i]=0;
        }
        for (int i=0;i<n;i++){
            scanf("%d",&a[i]);
            freq[a[i]]++;

        }

        int ans = -1;

        // jeta tin bar asche seta khujo 
        for (int i=0;i<n ;i++){
            if (freq[a[i]] == 3){
                ans = a[i];
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;   
        }

