#include<bits/stdc++.h>
using namespace std;
int n = 12;
int main(){
    int k;cin>>k;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end() , greater<>());
    int cnt = 0;
    for(int i = 0; i < n ; i++){
        if(k <= 0) {cout<<cnt<<endl; return 0;}
        k -= arr[i];
        cnt++;
    }

    if(k<= 0){
        cout<<cnt<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}