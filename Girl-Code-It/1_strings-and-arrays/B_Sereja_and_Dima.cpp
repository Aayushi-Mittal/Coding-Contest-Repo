#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, s=0, d=0, turn=1;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int i=0, j=n-1;
    while(i<=j)
    {
        if(arr[i]>arr[j])
        {
            (turn==1) ? s+=arr[i] : d+=arr[i];
            i++;
        }
        else //if(arr[i]<arr[j])
        {
            (turn==1) ? s+=arr[j] : d+=arr[j];
            j--;
        }
        turn = 1-turn;
    }
    cout<<s<<" "<<d;
    return 0;
}