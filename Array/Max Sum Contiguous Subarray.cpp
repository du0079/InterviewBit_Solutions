int Solution::maxSubArray(const vector<int> &A) {
    int current=A[0];
    int m=A[0];
    for(int i=1;i<A.size();i++){
        current=max(A[i],A[i]+current);
        if(m<current){
            m=current;
        }
    }
    return m;
}