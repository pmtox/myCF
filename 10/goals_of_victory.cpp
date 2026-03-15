#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n < 2 || n > 100) continue;
        vector<int> arr(n);
        for(int i = 0 ; i < n-1 ; i++){
            cin>>arr[i];
        }
        long long sum = 0;
        for(int i = 0 ; i < n-1 ; i++){
            sum+=arr[i];
        }
        cout<<-sum<<endl;
    }
    return 0;
}