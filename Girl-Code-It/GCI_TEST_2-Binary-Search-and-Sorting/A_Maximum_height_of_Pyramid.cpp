#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vii vector<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, TC;
    cin >> TC;
    for (t=0; t<TC; t++)
    {
        long long int n, i=0;
        cin>>n;
        /*
        for(i=0; i<n; i++)
        {
            if(2*n<(i+1)*i)
                break;
        }
        */
        int d = sqrt(1+8*n);
        cout<<(-1+d)/2<<endl;
    }
    return 0;
}