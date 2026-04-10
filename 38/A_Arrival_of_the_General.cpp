#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin>>n;
    vector<int>arr(n);
    int mini = 0;
    int maxi = 0;
    for(int i =0; i < n ; i++){
        cin>>arr[i];
        if(arr[i] <= arr[mini]){
            mini = i;
        }
        if(arr[i] > arr[maxi]){
            maxi = i;
        }
    }
    int ans = (n - 1) - mini  + maxi - 0 - (mini < maxi);
    cout<<ans<<endl;
    return 0;
}