#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    double arr[n];  // floating type
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Inverse of array elements: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)  // 0
            cout << 1.0 / arr[i] << " ";
        else
            cout << "Infinity ";
    }
    cout << endl;

    return 0;
}
