#include <bits/stdc++.h>
using namespace std;

void findSmallestAndSecondSmallest(const vector<int>& arr) {
    if (arr.size() < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int num : arr) {
        if (num < smallest) {
            // Update both smallest and second smallest
            secondSmallest = smallest;
            smallest = num;
        } else if (num > smallest && num < secondSmallest) {
            // Update only second smallest
            secondSmallest = num;
        }
    }

    if (secondSmallest == INT_MAX) {
        cout << "There is no second smallest element in the array." << endl;
    } else {
        cout << "Smallest element: " << smallest << endl;
        cout << "Second smallest element: " << secondSmallest << endl;
    }
}

int main() {
    vector<int> arr = {12, 13, 1, 10, 34, 1};

    findSmallestAndSecondSmallest(arr);

    return 0;
}