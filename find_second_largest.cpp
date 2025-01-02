#include <bits/stdc++.h>
using namespace std;

// FIND THE SECOND LARGEST ELEMENT IN AN ARRAY
// find the second largest element in an array
void second_max(){
  int n;
  cout<<"Enter number of elements in array: ";
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  int second_max=arr[0];
  for(int i= n-2; i>=0; i--){
   if(arr[i]>second_max){
     second_max = arr[i];
   } 
  }
  cout<<"The second largest element in the array is : "<<second_max<<" at "<<n-2<<" index" ;
}

int main(){
    second_max();
    return 0;
}