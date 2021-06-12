class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool check=false;
        int i, j, m=0, n=0, rot=-1, rot0=1, rot90=1, rot180=1, rot270=1;
        for(j=0; j<mat[i].size(); j++)
        {
            i=0;
            if (mat[i][j]!=target[m][n])
            {
                rot0=0;
            }
            i=mat.size()-1;
            if (mat[i][j]!=target[m][n])
            {
                rot180=0;
            }
            n++;
        }
        for(i=0; i<mat.size(); i++)
        {
            j=0;
            if (mat[i][j]!=target[m][n])
            {
                rot90=0;
            }
            j=mat.size()-1;
            if (mat[i][j]!=target[m][n])
            {
                rot270=0;
            }
            m++;
        }
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==target[i][j])
            }
        }
    }
};