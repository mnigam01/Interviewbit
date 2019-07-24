// Array
// Flip

vector<int> Solution::flip(string A) {
    int sum=0,start=0,end=0,maxl=INT_MIN,maxstart,maxend;
    int i = 0,n = A.size();
    while(i<n)
    {
        if (A[i]=='0')
            sum++;
        else
            sum--;
        
        if (sum>maxl){
            maxl = sum;
            maxstart = start;
            maxend = end;
        }
        end = i+1;
        if (sum<0){
            sum = 0;
            start = i+1;
        }
        
        i++;
    }
    vector <int> B;
    if (maxl>0){
    B.push_back(maxstart+1);
    B.push_back(maxend+1);}
    return B;
}
