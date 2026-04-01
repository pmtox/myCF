#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }

        int maxii = *max_element(arr.begin() , arr.end());
        int minii = *min_element(arr.begin() , arr.end());
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != maxii && arr[i] != minii){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}