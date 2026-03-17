#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;cin>>s;
        
        long long sum = n;
        
        unordered_map<char , int>mpp;
        for(int i =0; i < s.size() ; i++){
            mpp[s[i]]++;
        }
        sum+=mpp.size();
        
        cout<<sum<<endl;
    }
    return 0;
}