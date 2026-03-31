#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n+1);
        int cnt = 0;
        arr[0] = 0;
        for(int i = 1 ; i <= n; i++){
            cin>>arr[i];
            if(arr[i-1] == 0 && arr[i] != 0){
                cnt++;
            }
        }

        if(cnt > 1){
            cout<<2<<endl;
        }else{
            cout<<cnt<<endl;
        }
    }
}