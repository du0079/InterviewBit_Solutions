int Solution::coverPoints(vector<int> &A, vector<int> &B) {
     int count=0;
     vector <int> v1;
     vector <int> v2;
     for(int i=1;i<A.size();i++){
         v1.push_back(A[i]-A[i-1]);
     }
     for(int i=1;i<B.size();i++){
         v2.push_back(B[i]-B[i-1]);
     }
     for(int i=0;i<v1.size();i++){
         if(abs(v1[i])>abs(v2[i])){
            count = count + abs(v1[i]);}
        else if(abs(v1[i])==abs(v2[i])){
                count = count + abs(v1[i]);
            }
        else{
             count = count + abs(v2[i]);
         }
     }
     return count ;}
