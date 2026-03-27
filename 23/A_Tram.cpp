#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    long long ans = 0;
    long long sum = 0;
    while(t--){
        int a , b;cin>>a>>b;
        sum = abs(sum - a) + b;
        ans = max(sum , ans);
    }
    cout<<ans<<endl;
}