// Array
// First Missing Integer

int Solution::firstMissingPositive(vector<int> &A) {
    int t=0;
    for (int i=0;i<A.size();i++){
        if (A[i]<=0){
            swap(A[i],A[t]);
            t++;
        }
    }
    for (int i=t;i<A.size();i++){
        if (abs(A[i])+t-1<A.size() && A[abs(A[i])+t-1]>0){
            A[abs(A[i])+t-1] = -A[abs(A[i])+t-1];
        }
    }
    for (int i=t;i<A.size();i++){
        if (A[i]>0)
            return i-t+1;
    }
    return A.size()-t+1;
}
