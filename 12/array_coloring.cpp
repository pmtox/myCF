#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long>arr(n);
        long long sum = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            sum+= arr[i];
        }
            if(sum % 2 == 0 && n >= 2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
    }
    return 0;
}