#include <algorithm>
#include <iostream>
using namespace std; 
int main(){ 
    int arr[]={1,2,3,4,5};
    // sort(arr+2,arr+6);
    reverse(arr+3,arr+5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
