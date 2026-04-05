#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n , x;
        cin>>n>>x;
        vector<long long> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        long long sum = accumulate(arr.begin() , arr.end() , 0ll);
        long long amin = sum / x + (sum%x != 0);

        long long bmax = 0;
        for(auto it: arr){

            bmax = bmax + it / x + (it%x != 0);
        }
        cout<<amin << " "<<bmax<<endl;
    }
}