#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
        }
        int cnt = 0;
        bool flg = 1;
        for(int i = n-2 ; i >= 0 ; i--){
            while(arr[i] >= arr[i + 1] && arr[i] > 0){
                arr[i] = arr[i] / 2;
                cnt++;
            }
            if(arr[i] == arr[i+1]){
                cout<<-1<<endl;
                flg = 0;
                break;
            }
        }
        if(flg){
            cout<<cnt<<endl;
        }
    }
}