

int Solution::isPalindrome(string A) {
    int i = 0;
    int j = A.size()-1;
    
    LOOP:while(i < j){
        char c = A[i];
        char d = A[j];
        if(!((( (int)c >= 97)&& ((int)c <= 122)) || (  ( (int)c >= 65 ) && ( (int)c <= 90 ))  ||(isdigit(c))))
        {i++;
            goto LOOP;
        }
        if(!((  ( (int)d >= 97) && ((int)d <= 122 )  ) || ( ( (int)d >= 65) && ( (int)d <= 90 ) )||( isdigit(d)) )){
            j--;
            goto LOOP;
        }
        c = tolower(c);
        d = tolower(d);
        if(c != d){
            return 0;
        }
        i++;
        j--;
    }
    
    return 1;
}