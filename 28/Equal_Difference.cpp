#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        unordered_map<int , long long> mpp;
        for(int i= 0 ; i < n ; i++){
            mpp[arr[i] - i]++;
        }
        long long cnt = 0;
        for(auto &it : mpp){
            long long sub = it.second;
            cnt += sub * (sub - 1)/2;
        }
        cout<<cnt<<endl;
    }
}