// Array
// Wave Array


vector<int> Solution::wave(vector<int> &A) {
    int n = A.size();
    sort(A.begin(),A.end());
    for (int i=0;i<n-1;i=i+2){       // condition if n would fail if n is odd take 3 elem
        swap(A[i],A[i+1]);           // -ent and try 
    }
    return A;
}
