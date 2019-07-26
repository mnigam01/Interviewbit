// Array
// Find Duplicate in Array

int Solution::repeatedNumber(const vector<int> &A) {
    
    int a1 = 0,a2=1;
    int n=A.size();
    for (int i=0;i<n;i++){
        a1 = a1^A[i];
    }
    for (int i=2;i<n;i++){
        a2 = a2^i;
    }
    
    return a1^a2;
    
}
