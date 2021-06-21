#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
    
    int n, q, i;
    cin>>n>>q;
    int a[i];
    for(i=0; i<n; i++)
        cin>>a[i];
    while(q--)
    {
        int x, pos=0, neg=0, check=0;
        string ans;
        cin>>x;
        for(i=0; i<n; i++)
        {
            if(x==a[i])
            {
                ans='0'; 
                check=1;
                break;
            }
            else if(x<a[i])
                neg++;
            else
                pos++;
        }
        if(check==0)
        {
            if(neg%2==0)
                ans="POSITIVE";
            else
                ans="NEGATIVE";
        }
        cout<<ans<<endl;
    }     
	return 0;
}