#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ,p; cin>>n>>p;
    vector<int> ress(n); vector<int> costs(n);
    for(int i = 0 ; i < n ; i++){
        cin>>ress[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>costs[i];
    }

    vector<pair<int , int>> arr;
    for(int i = 0 ; i < n ; i++){
        arr.push_back({costs[i] , ress[i] });
    }
    sort(arr.begin() , arr.end());

    long long fst = p;
    int rem = n-1;
    int idx = 0;
    while(rem > 0 && idx < n){
        int cost = arr[idx].first;
        int capacity = arr[idx].second;

        if(cost>= p) break;
        int take = min(rem , capacity);
        fst+=(long long)take * cost;
        rem -= take;
        idx++;
    }
    fst+= (long long) rem * p;
    
    cout<<fst<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}