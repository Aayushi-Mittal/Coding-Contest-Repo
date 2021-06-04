#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, req=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1 || (arr[i]%2==1 && gcd(arr[i], 2*arr[i+1])==1))
            {
                idx = i; 
                req=1;
            }
            if(req==1)
            {
                if(gcd(arr[idx], 2*arr[i])==1)
            }
        }
    }
    return 0;
}