#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int count = 0;
        int pow10 = 1;
        while(pow10 <= n) {
            count += min(9, n / pow10);
            pow10 *= 10;
        }   
        
        cout<<count<<endl;
    }
    return 0;
}