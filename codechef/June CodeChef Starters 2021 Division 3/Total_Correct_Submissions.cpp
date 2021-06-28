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
	    int n, num;
	    cin>>n;
	    unordered_map<string, int> q;
	    vector<int> ans;
	    string code;
	    n=3*n;
	    while(n--)
	    {
	        cin>>code>>num;
	        if(q.find(code)!=q.end())
	            q.find(code)->second+=num;
	        else
	            q[code]=num;
	    }
	    for(auto itr=q.begin(); itr!=q.end(); itr++)
	        ans.push_back(itr->second);
	    sort(ans.begin(), ans.end());
	    for(int i=0; i<ans.size(); i++)
	        cout<<ans[i]<<" ";
	    cout<<endl;
	}
	return 0;
}