bool checkGreater(int A, int B){
    if(A > B){
        return true;
    }
    return false;
}

void Solution::merge(vector<int> &A, vector<int> &B) {
    
    int i = 0, j = 0;
    while((i < A.size()) && (j < B.size())){
        bool a = checkGreater(A[i], B[j]);
        if(a){
            A.insert(A.begin()+i, B[j]);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    while(j != B.size()){
        A.push_back(B[j]);
        j++;
    }
}