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
        int arr[n];
        vector<int> setbit, unsetbit;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if((arr[i] >> 0) & 1)
                setbit.push_back(arr[i]);
            else
                unsetbit.push_back(arr[i]);
        }
        for(int i=0; i<unsetbit.size(); i++)
            cout<<unsetbit[i]<<" ";
        for(int i=0; i<setbit.size(); i++)
            cout<<setbit[i]<<" ";
        cout<<"\n";
    }     
	return 0;
}
