#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    int xor1 = 0;
    int xor2 = 0;
    vector<long long> arr(n);
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        xor1 ^= arr[i];
    }
    for(int i = 0 ; i < n+1 ; i++){
        xor2 ^= i;
    }
    int xorr = xor1 ^ xor2;
    cout<< xorr;
    return 0;
}