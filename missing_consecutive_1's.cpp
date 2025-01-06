#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingElements(const vector<int>& arr, int start, int end) {
    unordered_set<int> numbers(arr.begin(), arr.end());
    vector<int> missing;

    for (int i = start; i <= end; ++i) {
        if (numbers.find(i) == numbers.end()) {
            missing.push_back(i);
        }
    }
    return missing;
}

int main() {
    // Example array
    vector<int> arr = {1, 2, 4, 6, 7};
    int start = 1, end = 7; // Define the range

    // Find missing elements
    vector<int> missing = findMissingElements(arr, start, end);

    // Print missing elements
    cout << "Missing elements: ";
    for (int num : missing) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
