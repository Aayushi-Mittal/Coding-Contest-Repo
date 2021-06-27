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
        string a;
        cin>>a;
        if(a[0]=='1')
            a.insert(a.begin()+1, '0');
        else
            a='1'+a;
        cout<<a<<endl;
    }     
	return 0;
}
