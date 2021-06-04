#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, q;
    string s;
    cin >> k >> s >> q;
    for (int i=0; i<q; i++)
    {
        int p, c, w;
        cin>>p>>c;
        s[p] = c;
        cout<<w<<endl;
    }
    return 0;
}