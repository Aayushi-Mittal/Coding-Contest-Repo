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
        int n;
        cin>>n;
        int arr[n], ans=-1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]>=1 && arr[i]<=7)
                ans = i+1;
        }
        cout<<ans<<endl;
    }     
	return 0;
}