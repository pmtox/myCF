#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long a , b , n;
        cin>>a>>b>>n;
        vector<long long> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        long long timer = b;
        for(int i = 0 ; i < n ; i++){
            timer += min(arr[i] , a - 1);
        }
        cout<<timer<<endl;
    }
    return 0;
}