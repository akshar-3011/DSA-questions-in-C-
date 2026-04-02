#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Running sum logic
    for(int i = 1; i < nums.size(); i++) {
        nums[i] = nums[i-1] + nums[i];
    }

    // Output result
    cout << "Running sum array: ";
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}