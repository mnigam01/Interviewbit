// Array
// Repeat and Missing Number

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int sum1=0,sum2=0,sum12=0,sum22=0;
    long long int n = A.size();// previously getting error because long long int wasn't there
    sum2 = (long long int) n*(n+1)/2;
    sum22 = (long long int)(n*(n+1)*(2*n+1))/6;
    for (long long int i=0;i<n;i++){// insert long long int 
        sum1 = (long long int)(sum1+A[i]);
        sum12 = (long long int)(sum12+ (long long int)A[i]*A[i]); // use second time long long
    }                                                  // to get the answer otherwise error 
    long long int h = (long long int)((sum22-sum12)/(sum2-sum1));
    long long int k = (long long int)(sum2-sum1);
    vector <int> B;
    B.push_back((h-k)/2);
    B.push_back((h+k)/2);
    return B;
}