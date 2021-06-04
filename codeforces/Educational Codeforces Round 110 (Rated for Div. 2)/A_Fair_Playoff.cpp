#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if ( (b > a && a > max(c, d)) || (a > b && b > max(c, d)) || (d > c && c > max(a, b)) || ((c > d) && d > max(a, b)) )
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}