// Array
// Max Non Negative Sub Array


vector<int> Solution::maxset(vector<int> &A) 
{
    int n = A.size();
    long long int sumtillnow=0,curr=0,end=0,maxtillnow=INT_MIN,length=0,anscurr=0,ansend=-1;
    int i =0;
    while(i<n)
    {   
        
        if (A[i]>=0){
           long long int sumtillnow=0,curr=i;
           while(i<n && (A[i])>=0)
            {   
                sumtillnow += A[i];
                i++;
            }
            end = i-1;
        
        if (sumtillnow>maxtillnow || (sumtillnow==maxtillnow &&(end-curr+1)>length)){
            maxtillnow = sumtillnow;
            length = end-curr+1;
            anscurr = curr;
            ansend = end;
        }}
        
        i++;
    }
    
    vector <int> v2;
    for (int i=anscurr;i<=ansend;i++)
    {
        if (A[i]>=0)
            v2.push_back(A[i]);
    }
    return v2;
    
}
