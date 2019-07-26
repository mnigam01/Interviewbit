// Array
// Max Distance

int Solution::maximumGap(const vector<int> &A) {
    vector <int> left(A.size());
    vector <int> right(A.size());
    int n = A.size();
    left[0] = A[0];
    right[n-1] = A[n-1];
    for (int i=1;i<n;i++){
        left[i] = min(A[i],left[i-1]);
    }
    for (int i=n-2;i>=0;i--){
        right[i] = max(A[i],right[i+1]);
    }
    int i=0,j=0,maxl=-1;
    while(i<n && j<n){
        if (left[i]<=right[j]){     // previously only less sign wrong answer for {1} vector
            maxl = max(maxl,j-i);  // Hence change it also given that A[i]<=A[j]
            j++;                    // if only A[i]<A[j] was given then only < sign                    
        }
        else
            i++;
            
    }
    return maxl;
}
