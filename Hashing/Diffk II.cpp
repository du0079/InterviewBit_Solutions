int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_map<int, int> myMap;
    
    for(int i = 0; i < A.size(); i++){
        if(myMap.find(A[i]) == myMap.end()){
            myMap[A[i]] = 1;
        }
        else{
            myMap[A[i]] = 2;
        }
    }
    
    auto it = myMap.begin();
    
    while(it != myMap.end()){
        int num = it->first-B;
        if(myMap.find(num) != myMap.end()){
            if(myMap.find(num) != it){
                return 1;    
            }
            else{
                if(it->second > 1){
                    return 1;
                }
            }
        }
        it++;
    }
    
    return 0;
}