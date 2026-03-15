/*For example, from the sequence a=[4,3,2,6,3,3]
, Vika will obtain the sequence b=[4,6,3]
. */

// 1 7 9 5 7
// 1 7 9 3 5 7

// 1 2 2 1 1
// 1 2 2 1 1 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n ; cin>>n;
        vector<long long> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        
        vector<int> ans;
        ans.push_back(arr[0]);
        
        for(int i = 1 ; i < arr.size(); i++){
            if(arr[i] >= arr[i-1]){
                ans.push_back(arr[i]);
            }else{
                ans.push_back(1);
                ans.push_back(arr[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}