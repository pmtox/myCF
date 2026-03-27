#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int> arr(t);
    long long ts = 0;
    for(int i = 0 ; i<t ; i++){
        cin>>arr[i];
        ts+=arr[i];
    }
    sort(arr.begin() , arr.end() , greater<>());
    long long t2 = ts / 2;
    long long sum = 0;
    int cnt = 0;
    for(int i = 0 ; i < t; i++){
        sum+=arr[i];
        cnt++;
        if(sum > t2){
            break;
        }
    }
    cout<<cnt <<endl;
    return 0;
}