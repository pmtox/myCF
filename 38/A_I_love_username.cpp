#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<long long> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    long long maxii = arr[0];
    long long minii = arr[0];
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxii){
            maxii = arr[i];
            cnt++;
        }
        else if(arr[i] < minii){
            minii = arr[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
}