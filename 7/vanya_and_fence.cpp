#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , h; cin>>n >>h;
    int k = n;
    int cnt = 0;
    vector<long long> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
        
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > h){
            cnt+=2;
        }else if(arr[i]<=h){
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}