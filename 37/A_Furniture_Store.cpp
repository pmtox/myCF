#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<int> not_ordered;
    int minii = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            minii = arr[i];
            continue;
        }
        
        // CATCH
        // we can order only values less than minii 
        // and if arr[i] >= minii it won't be ordered

        if(arr[i] >= minii){
            not_ordered.push_back(i + 1);
        }
        minii = min(minii , arr[i]);
    }
    cout<<not_ordered.size()<<endl;
    for(int i = 0; i < not_ordered.size() ; i++){
        cout<<not_ordered[i]<<" ";
    }
    cout<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
