#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];             
        for(int i=0; i<n; i++)
            cin>>arr[i];
        // Sorting in descending order so that i-arr[i]!=j-arr[j]
        sort(arr, arr+n, greater<int>());
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    }
    return 0;
}