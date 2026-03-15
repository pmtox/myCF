#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n ; cin>>n;
        unordered_map<long long , long long> mpp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int x;
                cin >> x;
                mpp[x]++;
                }
            }
            bool is_ans = true;
            for(auto &it : mpp){
                if(it.second > n*(n-1)){
                    is_ans = false;
                }
            }
            if(is_ans){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    return 0;
}