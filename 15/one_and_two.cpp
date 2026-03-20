#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        int cnt2 = 0;
        for(int i= 0  ; i < n ; i++){
            cin>>arr[i];
            if(arr[i] == 2) cnt2++;
        }
        if(cnt2 % 2 != 0){
            cout<<-1<<endl;
            continue;
        }
        if(cnt2 == 0){
            cout<<1<<endl;
            continue;
        }
        int curr_2 = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]==2){
                curr_2++;
            }
            if(curr_2 == cnt2 / 2){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}