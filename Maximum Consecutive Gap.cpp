// Array
// Maximum Consecutive Gap


int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if (A.empty() || n<2)
        return 0;
    // Find maximum and minimum in arr[] 
    int maxVal = *max_element(A.begin(),A.end()), minVal = *min_element(A.begin(),A.end()); 
    
    
  
    // Arrays to store maximum and minimum values 
    // in n-1 buckets of differences. 
    vector <int> maxBucket(n - 1,INT_MIN);              //int maxBucket[n - 1]; 
    vector <int> minBucket(n - 1,INT_MAX);             //int minBucket[n - 1]; 
                                                    //fill_n(maxBucket, n - 1, INT_MIN); 
                                                    //fill_n(minBucket, n - 1, INT_MAX); 
  
    // Expected gap for every bucket. 
    float delta = (float)(maxVal - minVal) / (float)(n - 1); 
  
    // Traversing through array elements and 
    // filling in appropriate bucket if bucket 
    // is empty. Else updating bucket values.  
    for (int i = 0; i < n; i++) { 
        if (A[i] == maxVal || A[i] == minVal) 
            continue; 
  
        // Finding index of bucket. 
        int index = (float)((A[i] - minVal) / delta); 
  
        
        maxBucket[index] = max(maxBucket[index], A[i]); 
  	   minBucket[index] = min(minBucket[index], A[i]); 
    } 
  
    // Finding maximum difference between maximum value 
    // of previous bucket minus minimum of current bucket. 
    int prev_val = minVal; 
    int max_gap = 0; 
    for (int i = 0; i < n - 1; i++) { 
        if (minBucket[i] == INT_MAX) 
            continue; 
        max_gap = max(max_gap, minBucket[i] - prev_val); 
        prev_val = maxBucket[i]; 
    } 
    max_gap = max(max_gap, maxVal - prev_val); 
  
    return max_gap;
    
}