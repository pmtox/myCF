#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        int neg = 0;
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
            if(arr[i] == -1) neg++;
        }
        
        int pos = n - neg;
        if(pos < neg){
            int k = (neg - pos +1) / 2;
            int ans = k;
            if((neg-k)%2== 1){
                ans++;
            }
            cout<<ans<<endl;
        }
        else{
            if(neg % 2){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }
        }
        
    }
    return 0;
}