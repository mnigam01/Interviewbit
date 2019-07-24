// Array
// Hotel Bookings Possible

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    
    vector <pair<int,int>> v;
    int n = arrive.size();
    for (int i = 0;i<n;i++){
        v.push_back(make_pair(arrive[i],1));
        v.push_back(make_pair(depart[i],-1));
    }
    sort(v.begin(),v.end());
    int curr = 0,maxl=0;
    for (int i=0;i<v.size();i++){
        if (v[i].second==1){
            curr++;
            maxl = max(maxl,curr);     //Since all guests must leave curr will be 0  after the loop 
                                       //ends maxl stores the max trafic or guest no.
        }
        else
            curr--;
        
    }
    return maxl<=K;      // return true if maxl is less than equal to K i.e, room available
    
}
