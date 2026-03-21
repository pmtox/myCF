#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n , k , x;
        cin>>n>>k>>x;
        
        long long min_sum = (long long)k * (k + 1) / 2;
        long long max_sum = (long long)k * (2LL * n - k + 1) / 2;
        
        if(x >= min_sum && x <= max_sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}