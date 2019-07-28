// Array
// Spiral Order Matrix II

vector<vector<int> > Solution::generateMatrix(int n) {
    
    vector<vector<int>> result(n,vector<int>(n,0));
 
    int rowStart = 0;
    int rowEnd = n-1;
 
    int colStart = 0;
    int colEnd = n - 1;
 
    int dir = 1;
    int count = 1;
 
    while (rowStart <= rowEnd && colStart <= colEnd) 
    {
        if (dir == 1) 
        {    // left to right
            //cout<<dir<<" "<<colStart<<" "<<colEnd<<endl;
            for (int i = colStart; i <= colEnd; ++i) 
            {
                result[rowStart][i] = count++;
            }
 
            ++rowStart;
            dir = 2;
        } 
        else if (dir == 2) 
        {     // top to bottom
            //cout<<dir<<" "<<rowStart<<" "<<rowEnd<<endl;
            for (int i = rowStart; i <= rowEnd; ++i) 
            {
                result[i][colEnd] = count++;
            }
 
            --colEnd;
            dir = 3;
        } 
        else if (dir == 3) 
        {     // right to left
            //cout<<dir<<" "<<colEnd<<" "<<colStart<<endl;
            for (int i = colEnd; i >= colStart; --i) 
            {
                result[rowEnd][i] = count++;
            }
 
            --rowEnd;
            dir = 4;
        } 
        else if (dir == 4) 
        {     // bottom to up
            //cout<<dir<<" "<<rowEnd<<" "<<rowStart<<endl;
            for (int i = rowEnd; i >= rowStart; --i) 
            {
                result[i][colStart] = count++;
            }
            ++colStart;
            dir = 1;
        }
    }
 
    return result;
}