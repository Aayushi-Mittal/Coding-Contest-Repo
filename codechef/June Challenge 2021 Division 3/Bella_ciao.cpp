#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
    
    long int t;
    cin>>t;
    while(t--)
    {
        long long interval, d, p, q;
        cin>>d>>interval>>p>>q;
        int rem=d%interval;
        d=d/interval;
        cout<<(d*p + ((d*(d-1))/2)*q)*interval + (p+d*q)*rem<<endl;
    }
	return 0;
}