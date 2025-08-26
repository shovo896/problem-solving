#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    vector<int>nums={1,2,3,4,5,6};
    int k=2;
    k=k%nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    for(int n :nums) cout << n << "";
    return 0 ;










}

