#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n>>k;
    int arr[n];
    vector<int> ans;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    k=k%n;
    for(int i=k; i<n; i++)
        ans.push_back(arr[i]);
    for(int i=0; i<k; i++)
        ans.push_back(arr[i]);
    for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";
    return 0;
}