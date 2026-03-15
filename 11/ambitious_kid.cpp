#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    vector<long long> arr(t);
    for(int i = 0 ; i < t ; i++){
        cin>>arr[i];
    }
    long long minn = abs(arr[0]);
    for(int i = 0 ; i < t;  i++){
        int val = abs(arr[i]);
        if(val < minn){
            minn = val;
        }
    }
    cout<<minn<<endl;
}