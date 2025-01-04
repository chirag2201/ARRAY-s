// find union from two sorted array
vector <int> UnionSortedArray(const vector<int>& A, const vector<int>& B){
    vector <int> result;
    int i=0, j=0;
    
    while(i<A.size()&&j<B.size()){
        if(A[i]<B[j]){
            result.push_back(A[i]);
            i++;
        }
        else if(A[i]>B[j]){
            result.push_back(B[j]);
            j++;
        }
        else{
            result.push_back(A[i]);
            i++;
            j++;
        }
    }
    while(i<A.size()){
        result.push_back(A[i]);
        i++;
    }
    while(j<B.size()){
        result.push_back(B[j]);
        j++;
    }
    return result;
}

int main(){
    vector<int> A = {1, 2, 4, 5};
    vector<int> B = {2, 3, 5, 6};
    vector<int> result = UnionSortedArray(A,B);
    for(int num: result){
        cout<<num<<" ";
    }
    return 0;
}