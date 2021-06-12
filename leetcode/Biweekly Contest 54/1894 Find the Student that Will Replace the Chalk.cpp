class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum=0, i=0;
        for(i=0; i<chalk.size(); i++)
            sum+=chalk[i];
        k = (k%sum);
        for(i=0; i<chalk.size(); i++)
        {
            if(k<chalk[i])
                break;
            k -= chalk[i];
        }
        return i;
    }
};