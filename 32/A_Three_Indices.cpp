#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        bool found = false;
        for(int i = 1 ; i < n-1;i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                found = true;
                break;
            }
        }
        if(!found) cout<<"NO"<<endl;
    }

    return 0;
}