// move zeros to end
void mv_zero(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int j;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j = i;
            break;  
        }
    }
    for(int i = j + 1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}    

int main(){
    mv_zero();
    return 0;
}