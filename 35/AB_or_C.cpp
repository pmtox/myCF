#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int >a(n) , b(n) , c(n);
        for(int i = 0 ; i < n ; i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        vector<pair<int , int>>arr;
        for(int i = 0 ; i<n; i++){
            arr.push_back({a[i] , i});
            arr.push_back({b[i] , i});
            arr.push_back({c[i] , i});

        }

        sort(arr.begin() , arr.end());
        vector<int>cnt(n , 0);
        int cov = 0;
        int ans = INT_MAX;
        int r = 0;
        for(int i = 0 ; i < 3*n ; i++){
            while(r < 3 * n && cov < n ){
                int idx = arr[r].second;
                if(cnt[idx] == 0)cov++;
                cnt[idx]++;
                r++;
            }
            if(cov == n){
                ans = min(ans , arr[r-1].first - arr[i].first);
            }
            int idx = arr[i].second;
            cnt[idx]--;
            if(cnt[idx] == 0) cov--;
        }
        
        cout<<ans<<endl;

    }
    return 0;
}