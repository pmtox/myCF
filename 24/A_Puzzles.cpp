#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    vector<long long> arr(m);
    for(int i = 0 ; i < m ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    long long bst = LLONG_MAX;
    for(int i = 0 ; i+n-1 < m; i++){
        bst = min(bst , arr[i+n-1] - arr[i]);
    }
    cout<<bst<<endl;
    return 0;
}