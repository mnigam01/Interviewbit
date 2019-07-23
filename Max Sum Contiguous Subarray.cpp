// Array
// Max Sum Contiguous Subarray

//   https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d
// Read the kadane algorithm part only, also the naive solution would be to go through every 
// subarray outer loop 0 to n, inner loop 0 to n


int Solution::maxSubArray(const vector<int> &A) {
    
    int i=1,sum=A[0],maxl=A[0];
    int n = A.size();
    while (i<n)
    {
        sum = max(sum+A[i],A[i]);
        if (sum>maxl)
            maxl = sum;
        
        i++;
    }
    return maxl;
    
}