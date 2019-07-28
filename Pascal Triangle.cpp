// Array
// Pascal Triangle


vector<vector<int> > Solution::solve(int A) {
    if (A==0) return {};
    vector<vector<int>> result{A};   // row initialise ho rahi hai vector ki
    // also tried vector<vector<int>> result{A,vector<int>(1,1)}; but it will fix the column length to 1 the left one here
    result[0].push_back(1);
    for (int i=1;i<A;i++){
        result[i].push_back(1);
        for (int j=0;j<i-1;j++){
            result[i].push_back(result[i-1][j]+result[i-1][j+1]);
        }
        result[i].push_back(1);
        
    }
    return result;
}
