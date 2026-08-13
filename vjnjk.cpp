#include<iostream>
#include<algorithm> 
using namespace std; 
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<< accumulate(arr,arr+6,0)<<'\n';
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;

}