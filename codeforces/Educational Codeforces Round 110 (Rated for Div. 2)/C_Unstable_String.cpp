#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s, subs;
        cin>>s;
        unordered_set<string> beautiful;
        bool isB=true;  //isbeautiful
        for(int i=0; i<s.size(); i++)
        {
            for(int j=i; j<s.size(); j++)
            {
                subs=' '; isB = true;
                for(int k=i; k<=j; k++)
                {
                    subs+=s[k];
                    if(s[k]=='?' && ((s[k-1]==1 && s[k+1]==0) || (s[k-1]==0 && s[k+1]==1)) )
                        isB = false;
                    if(s[k-1]==s[k] && s[k]!='?')
                        isB = false;
                }
                if(isB==true)
                    beautiful.insert(subs);
            }
        }
        //for (auto it = s.begin(); it != s.end(); it++)
            //cout<<*it<<endl;
        cout<<beautiful.size()<<endl;
    }
    return 0;
}