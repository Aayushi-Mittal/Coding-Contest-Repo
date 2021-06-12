class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<bool> arr(51,0);
        for(int i=0; i<ranges.size(); i++)
        {
            for(int j=ranges[i][0]; j<=ranges[i][1]; j++)
            {
                arr[j-1]=1;
            }
        }
        for(int i=left-1; i<right; i++)
            if(arr[i]!=1)
                return false;
        return true;
    }
};