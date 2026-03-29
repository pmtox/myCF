#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        int cnt1 = 0;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] <= i+1){
                cnt1++;
            }
            
        }
        cout<<cnt1<<endl;
    }
    return 0;
}