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
        int xa, xb, a, b;
        cin>>xa>>xb>>a>>b;
        cout<<(a/xa)+(b/xb)<<endl;
    }
    
	return 0;
}