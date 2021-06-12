class Solution {
public:
    int minFlips(string s) {
        int alt=s[0], count=0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]!=alt)
            {
                if (s[i+1]!=s[i] && s[i-1]==s[i] && i+1<s.size() && i-1>0)
                {
                    count++; alt=s[i];   //op1
                }
                else if(s[i+1]==s[i] && s[i-1]==s[i] && i+1<s.size() && i-1>0)
                {
                    count++; i++;   //op2
                } 
            }
            alt = 1 - alt;
        }
        return count;
    }
};