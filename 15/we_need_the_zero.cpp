#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        int xor_all = 0;
        for(int i = 0 ; i< n ; i++){
            cin>>arr[i];
            xor_all ^= arr[i];
        }
        if(n % 2 == 1){
            cout<<xor_all<<endl;
        }
        else if(xor_all == 0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}