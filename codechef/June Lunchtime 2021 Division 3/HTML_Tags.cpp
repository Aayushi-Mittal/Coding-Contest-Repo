#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
    
    int t;
    cin>>t;
    while(t--)
    {
        string tag, ans;
        cin>>tag;
        if(tag=="</>")
            ans="Error";
        else
        {
            for(int i=0; i<tag.size(); i++)
            {
                if((i==0 && tag[i]!='<') || (i==1 && tag[i]!='/') || (i==tag.size()-1 && tag[i]!='>'))
                {
                    ans="Error";
                    break;
                }
                else if(i>1 && i<tag.size()-1 && ((tag[i]>122 || tag[i]<97) && (tag[i]<48 || tag[i]>57)))
                {
                    ans="Error";
                    break;
                }
                else
                    ans="Success";
            }
        }
        cout<<ans<<endl;
    }     
	return 0;
}
