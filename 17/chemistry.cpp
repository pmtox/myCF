#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n ,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        unordered_map<char , int> mpp;
        
        for(int i = 0 ; i < s.size() ; i++){
            mpp[s[i]]++;
        }
        int cnt = 0;
        for(auto &it : mpp){
            if(it.second % 2 != 0){
                cnt++;
            }
        }
        if(cnt <= k+1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}