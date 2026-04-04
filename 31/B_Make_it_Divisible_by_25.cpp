#include<bits/stdc++.h>
using namespace std;

int ops(string& xx , string& num){
    int x = xx[0];
    int y = xx[1];
    
    int cnt = 0;
    int j = num.size()-1;
    while(j > 0 && num[j] != y){
        j--;
        cnt++;
    }
    int i = j -1;
    while(i > 0 && num[i] != x){
        i--;
        cnt++;
    }
    return cnt;
}

void solve(){
    long long n;cin>>n;
    string num = to_string(n);

    vector<string> strr = {"00" , "25" , "50" , "75"};
    int ans = INT_MAX;
    for(auto dig : strr){
        int minn = ops(dig , num);
        ans = min(ans , minn);
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}