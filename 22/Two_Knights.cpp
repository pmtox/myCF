#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i = 1 ; i <= n ; i++){
        long long total_cell = i * i;
        if( i == 1){
            cout<<0<<endl;
        } else{
            long long ttl = (total_cell * (total_cell - 1)) / 2;
            long long slabs = (i - 2) * (i - 1) * 2 * 2;
            cout<< ttl - slabs <<endl;
        }
    }
    return 0;
}