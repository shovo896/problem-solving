#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main() {
    vector<int> nums = {4, 1, 7, 3, 9, 5};

    if(nums.size() < 2) {
        cout << "Not enough elements!" << endl;
        return 0;
    }

    // Sort the vector in descending order
    sort(nums.begin(), nums.end(), greater<int>());

    cout << "Second largest element is: " << nums[1] << endl;

    return 0;
}

