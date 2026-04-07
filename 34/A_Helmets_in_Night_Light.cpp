#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,p;cin>>n>>p;
    vector<int>ress(n); vector<int> costs(n);
    for(int i = 0 ; i < n ; i++) cin>>ress[i];
    for(int i = 0 ; i < n ; i++) cin>>costs[i];

    vector<pair<int , int>> arr;
    for(int i = 0 ; i < n ; i++){
        arr.push_back({costs[i] , ress[i]});
    }

    sort(arr.begin() , arr.end());
    int ans = p;
    int idx = 0;
    int rem = n-1;

    while(idx < n && rem > 0){
        int cost = arr[idx].first;
        int container = arr[idx].second;

        if(cost >= p) break;
        int lft = min(container , rem);
        ans += (long long)lft * cost;
        rem-=lft;
        idx++;
    }
    ans+=(long long) rem * p;
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}