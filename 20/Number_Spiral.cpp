#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long y , x;
        cin>>y>>x;

        long long m = max(y , x);
        long long diag = m * m - m + 1;

        if(y >= x){
            if(m % 2 == 0){
                cout<<diag + (m - x) <<endl;
            }else{
                cout<<diag - (m - x) <<endl;
            }
        }
        else{
            if(m % 2 == 0){
                cout<<diag - (m - y) <<endl;
            }else{
                cout<<diag + (m - y) <<endl;
            }
        }
    }
    return 0;
}
