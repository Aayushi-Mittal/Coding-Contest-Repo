class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        set<int> s;
        int op=0;
        for(int i=0; i<nums.size(); i++)
            s.insert(nums[i]);
        for(int i=0; i<nums.size(); i++)
        {
            op += s.size()-(s.find(nums[i]))-1;
        }
        return op;
        /*
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        sort(nums.end(), nums.begin());
        int i=1;
        auto itr=m.begin();
        while(i<nums.size())
        {
            if(nums[i]==itr->first)
            {
                nums[i]=(itr+1)->first;
                count++;
            }
            if(nums[i+1]!=nums[i])
                *itr++;
        }
        */
    }
};