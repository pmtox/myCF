#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, k;
        cin>>n>>k;
        vector<int>arr(n);
        long long sum = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        

        if(sum%2 != 0){
            cout<<"YES"<<endl;
        }else{
            if(n*k % 2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}