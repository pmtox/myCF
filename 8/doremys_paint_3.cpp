#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long>arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        if(n == 2){
            cout<<"YES"<<endl;
            continue;
        }
        
        map<int , int>mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[arr[i]]++;
        }
        
        if(mpp.size() >2) {
            cout<<"NO"<<endl;
        }
        else if(mpp.size() == 1){
            cout<<"YES"<<endl;
        }
        else{
            auto it = mpp.begin();
            int cnt1 = it->second;
            it++;
            int cnt2 = it->second;
            
            if(abs(cnt1 - cnt2) <= 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}