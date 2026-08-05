#include<stdio.h> 
void solve(){
    int n ;
    scanf("%d",&n);
    long long  a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }

    long long current_b=0 ;
    for (int i=0;i<n ;i++){
        current_b++;
        if (current_b ==a[i]){
            current_b++;
        }
    }
    printf("%lld\n",current_b);
}

int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
