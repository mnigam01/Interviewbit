// Arrays
// Min Steps in Infinite Grid


int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    int sum = 0;
    int n = A.size();
    if (n>1)
    {
        for (int i=1;i<n;i++)
        {
            sum+=max(abs(A[i]-A[i-1]),abs(B[i]-B[i-1]));
        }
    }
    return sum;
 
}