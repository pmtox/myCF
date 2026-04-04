#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        vector<int> arr(7);
        long long total = 0;
        int maxii = -10000;
        for(int i = 0 ; i < 7 ; i++){
            cin>>arr[i];
            total+= arr[i];
            maxii = max(maxii , arr[i]);

        }
        long long ans = 2 *maxii - total;


        /////////////hellll yeahhh ////////////////////
        cout<<ans<<endl;
    }
    return 0;
}