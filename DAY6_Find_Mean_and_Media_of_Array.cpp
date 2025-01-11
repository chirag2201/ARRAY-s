#include <bits/stdc++.h>
using namespace std;

// Partition function for Quickselect
int partition(vector<int>& arr, int left, int right, int pivotIndex) {
    int pivotValue = arr[pivotIndex];
    swap(arr[pivotIndex], arr[right]); // Move pivot to end
    int storeIndex = left;

    for (int i = left; i < right; i++) {
        if (arr[i] < pivotValue) {
            swap(arr[i], arr[storeIndex]);
            storeIndex++;
        }
    }
    swap(arr[storeIndex], arr[right]); // Move pivot to its final place
    return storeIndex;
}

// Quickselect function
int quickSelect(vector<int>& arr, int left, int right, int k) {
    if (left == right) {
        return arr[left];
    }

    int pivotIndex = left + (rand() % (right - left + 1)); // Random pivot
    pivotIndex = partition(arr, left, right, pivotIndex);

    if (k == pivotIndex) {
        return arr[k];
    } else if (k < pivotIndex) {
        return quickSelect(arr, left, pivotIndex - 1, k);
    } else {
        return quickSelect(arr, pivotIndex + 1, right, k);
    }
}

// Function to calculate mean and median
pair<double, double> calculateMeanAndMedian(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        throw invalid_argument("Array is empty");
    }

    // Calculate mean
    double sum = 0;
    for (int num : arr) {
        sum += num;
    }
    double mean = sum / n;

    // Calculate median using Quickselect
    double median;
    if (n % 2 == 1) {
        median = quickSelect(arr, 0, n - 1, n / 2); // Middle element
    } else {
        int leftMid = quickSelect(arr, 0, n - 1, n / 2 - 1);
        int rightMid = quickSelect(arr, 0, n - 1, n / 2);
        median = (leftMid + rightMid) / 2.0; // Average of two middle elements
    }

    return {mean, median};
}

int main() {
    vector<int> arr = {7, 2, 1, 10, 8, 3, 5};
    
    try {
        pair<double, double> result = calculateMeanAndMedian(arr);
        cout << "Mean: " << result.first << endl;
        cout << "Median: " << result.second << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}