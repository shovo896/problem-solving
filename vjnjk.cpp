#include<iostream>
#include<algorithm> 
#include <numeric>
using namespace std; 
int main(){
    int arr[]={1,2,3,4,5,6};

    // accumulate(start,end ,initial value)
    cout<< accumulate(arr,arr+6,0)<<'\n';
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;

}