// Array
// Max Unsorted Subarray

vector<int> Solution::subUnsort(vector<int> &A) {
    
    int s=-1,e=-1;
    //bool flag = false;
    int n = A.size();
    for (int i=0;i<n-1;i++){
        if (A[i]>A[i+1]){
            s = i;
            break;
        }
    }
    for (int i=n-1;i>=1;i--){
        if (A[i]<A[i-1]){
            e = i;
            break;
        }
    }
    int minl=A[s],maxl=A[s];
    for (int i=s;i<=e;i++){
        minl = min(minl,A[i]);
        maxl = max(maxl,A[i]);
    }
    for (int i=0;i<s;i++){
        if (A[i]>minl){
            s = i;
            break;      // breaking since the array from 0 to s is sorted we have to find the 
        }               // minimum index of the element which is greater than minl 
            
    }
    for (int i=n-1;i>=e+1;i--){
        if (A[i]<maxl){
            e = i;
            //flag = true;
            break;      // breaking since the array from 0 to s is sorted we have to find the 
        }               // minimum index of the element which is greater than minl 
    
    
    }
    //cout <<s<<e<<endl;
    vector <int> temp;
    if (s==-1 && e==-1)
        temp.push_back(-1);
    else{
        temp.push_back(s);
        temp.push_back(e);
    }
    return temp;
    
}
