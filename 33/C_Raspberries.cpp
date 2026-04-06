#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        long long evv = 0;
        long long ans = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] %2 == 0){
                evv++;
            }
            if(arr[i] % k == 0){
                ans = 0;
            }
            ans = min(ans , k - arr[i] % k);
        }
        if(k == 4){
            if(evv >= 2){
                ans = min(ans , 0LL);
            }else if(evv == 1){
                ans = min(ans , 1LL);
            }
            else if(evv == 0){
                ans = min(ans , 2LL);
            }
        }
        cout<<ans<<endl;
    }
}