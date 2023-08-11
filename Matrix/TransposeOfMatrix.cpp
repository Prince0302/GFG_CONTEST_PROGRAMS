// Rest of the code is already given

class Solution
{   
    public:  
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};