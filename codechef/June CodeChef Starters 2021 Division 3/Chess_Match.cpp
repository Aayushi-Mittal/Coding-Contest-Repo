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
	    int a, b, n;
	    cin>>n>>a>>b;
	    cout<<(2*(180+n))-(a+b)<<endl;
	}
	return 0;
}
