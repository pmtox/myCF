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
        }
        int maxLen = 0;
        int left = 0;
        for(int right = 0; right < n ; right++){
            if(arr[right] == 1){
                left = right+1;
            }
            maxLen = max(maxLen , right - left +1);
        }
        
        cout<<maxLen<<endl;
    }
    return 0;
}