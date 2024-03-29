// Array
// Largest Number

bool mycompare(string a, string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0?1:0;      // Something new
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> arr(A.size());     // Something new
    int count=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]==0)
            count++;
        arr[i]=to_string(A[i]);      // Something new
    }
    if(count==A.size())
        return "0";
    sort(arr.begin(),arr.end(),mycompare);
    string ans="";
    for(int i=0; i<A.size(); i++)
        ans=ans+arr[i];
    return ans;
    
}
