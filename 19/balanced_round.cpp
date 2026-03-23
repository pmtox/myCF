#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t;
    while(t--){
        long long n ,k ; cin>>n>>k;
        vector<long long > arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        sort(arr.begin() , arr.end() , greater<>());

        long ans = 1;
        long cnt = 1;
        for(int i = 1 ; i < n ; i++){
            if(abs(arr[i] - arr[i-1]) <= k){
                cnt++;
            }else{
                cnt = 1;
            }
            ans = max(cnt , ans);
        }
        cout<<n - ans<<endl;
    }
    return 0;
}