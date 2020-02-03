int Solution::maxArr(vector<int> &A) {
    int arr[A.size()][A.size()];
    vector<int>v;
    for(int i=0;i<=A.size();++i){
        for(int j=1;j<=A.size();++j){
            arr[i-1][j-1]=abs(A[i-1]-A[j-1]) + abs(i-j);
            v.push_back(arr[i-1][j-1]);
        }
    }
    int max=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    return max;
    
}
