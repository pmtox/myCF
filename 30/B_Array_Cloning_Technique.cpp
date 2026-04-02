#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        map<int , int> mpp;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            mpp[arr[i]]++;
        }

        int maxii = 0;
        for(auto it: mpp){
            maxii = max(maxii , it.second);
        }
        int ans = 0;
        while(maxii < n){
            ans++;
            if(n - maxii >= maxii){
                ans += maxii;
                maxii *= 2;
            }
            else{
                ans+= n - maxii;
                maxii = n;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}