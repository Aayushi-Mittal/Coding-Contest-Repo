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
 
    int n, count=0;
    double len;
    cin>>n>>len;
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=len)
            count++;
    }
    long double p=((len)/count);
    cout<<p;
    return 0;
}