#include <bits/stdc++.h>
using namespace std;

// rotate the array by k places
void rotate_k(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    cout<<"Rotated element is: "<<temp;
}

int main(){
    rotate_k();
    return 0;
}