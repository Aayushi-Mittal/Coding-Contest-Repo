#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
    	long long int a, b;
        cin>>a>>b;
        ((b&(b-1))==0) ? cout<<"Yes\n" : cout<<"No\n";
	}
	return 0;
}
