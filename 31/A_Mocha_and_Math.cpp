#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<int >arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        
        cout<<accumulate(arr.begin() , arr.end() , arr[0] , std::bit_and<int>())<<endl;
    }
    return 0;
}