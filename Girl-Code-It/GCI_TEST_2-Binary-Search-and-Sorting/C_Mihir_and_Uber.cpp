#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vii vector<int, int>

using namespace std;

/* 
void solve()
{
    
}
*/
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, n, minnum=INT_MAX, mini, sum=0, maxdiff=0, minum=0, i=0;
    cin >> t>>n;
    int arr[n];
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
        /*
        if(arr[i]<minnum)
        {
            minnum=arr[i];
            mini = i;
        }*/
    }
    int start = 0, end=n-1, prev_sum=arr[0];
    for(i=0; i<n; i++)
    {
        sum+=arr[i];
        cout<<"sum:"<<sum<<endl;
        if(sum>t && i>0)
        {
            cout<<"maxdiff:"<<i-start<<" ";
            maxdiff = max(maxdiff, i-start);
            int temp = sum;
            sum=sum-prev_sum;
            prev_sum=temp;
            start++;
        }
    }
    maxdiff = max(maxdiff, i-start);
    cout<<maxdiff;
    return 0;
}