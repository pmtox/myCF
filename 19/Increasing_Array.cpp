#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    vector<long long>arr(n);
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    long long cnt = 0;
    long long max_so_far = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] < max_so_far){
            cnt += max_so_far - arr[i];
        }
        else{
            max_so_far = arr[i];
        }
    }
    cout<<cnt;
    return 0;
}