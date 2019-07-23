// Arrays
// Add One To Number

vector<int> Solution::plusOne(vector<int> &A) {
   
    int n = A.size()-1,carry=1,dummy;
    while(n>=0)
    {
        dummy = (carry+A[n]); 
        carry = dummy/10;
        A[n] = dummy%10;
        n--;
    }
    if (carry==1)
        A.insert(A.begin(),1);
    //return A;
    while(*(A.begin())==0)
        A.erase(A.begin());
    return A;

}