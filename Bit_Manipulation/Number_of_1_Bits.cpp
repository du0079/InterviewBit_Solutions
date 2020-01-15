int Solution::numSetBits(unsigned int A) {
    int sol = 0;
    while(A/2 != 0){
        if(A%2 != 0){
            sol++;
        }
        A = A/2;
    }
    if(A%2 != 0){
        sol++;
    }

    return sol;
}