#include <bits/stdc++.h>
using namespace std;

// FINDING THE LARGEST ELEMENT IN AN ARRAY
void find_max(){
int n;
  cout<<"Enter number of elements in array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter elements of array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int max=arr[0];
  for(int i=0; i<n; i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<"The largest element in the array is : "<<max;
}

int main(){
    find_max();
    return 0;
}