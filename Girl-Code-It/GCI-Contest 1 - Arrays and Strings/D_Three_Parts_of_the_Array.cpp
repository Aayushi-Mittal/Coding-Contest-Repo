#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, sum=0, sum1=0, sum2=0, npos=1;   //not possible
        cin>>n;
        int arr[n];
        vector<int> arr2;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0; i<n; i++)
        {
            sum=sum-arr[i];
            if(sum!=arr[i]){
                arr2.push_back(arr[i]);
            }
            else{
                sum1=sum;
                npos=0;
                break;
            }
        }
        cout<<sum1;
    }
    return 0;
}