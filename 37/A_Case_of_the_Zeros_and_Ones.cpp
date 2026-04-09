#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt1 = 0, cnt0 = 0;
    for(int i = 0 ; i < n; i++){
        if(s[i] == '1'){
            cnt1++;
        }
        else{
            cnt0++;
        }
    }
    int minii = min(cnt1 , cnt0);
    long long num = 2 * minii;

    cout<<n - num<<endl;
    return 0;
}