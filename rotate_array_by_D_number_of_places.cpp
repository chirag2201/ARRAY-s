// rotate the array elements by D number of places 
void rotate_d(){
    int n,d;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the number of rotations: ";
    cin>>d;
    
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }   
    for(int i=d; i<n;i++){
        arr[i - d] = arr[i];
    }
    for(int i = 0; i<d; i++){
        arr[n-d + i] = temp[i];
    }
    cout<<"Output: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    rotate_d();
    return 0;
}