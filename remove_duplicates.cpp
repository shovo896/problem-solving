#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 7, 3, 9, 5, 7, 3, 1};

    // Sort first
    sort(nums.begin(), nums.end());

    // Remove duplicates
    auto last = unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());

    // Print result
    for(int n : nums) {
        cout << n << " ";
    }

    return 0;
}























