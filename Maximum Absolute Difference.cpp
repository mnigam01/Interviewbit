// Array
// Maximum Absolute Difference


// https://www.geeksforgeeks.org/maximum-absolute-difference-value-index-sums/
// naive solution would be to go through every 
// subarray outer loop 0 to n, inner loop 0 to n
// Attached photo-graphs


int Solution::maxArr(vector<int> &A) {
    int n = A.size();
    int max1,max2,min1,min2;
    max1 = INT_MIN;
    max2 = INT_MIN;
    min1 = INT_MAX;
    min2 = INT_MAX;
    for (int i=0;i<n;i++){
        max1 = max(max1,A[i]+i); 
        max2 = max(max2,A[i]-i);
        min1 = min(min1,A[i]+i);
        min2 = min(min2,A[i]-i);
        
    }
    return max((max1-min1),(max2-min2));
}