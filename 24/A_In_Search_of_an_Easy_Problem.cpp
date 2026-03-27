#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int> arr(t);
    int cnt = 0;
    for(int i = 0 ; i<t ; i++){
        cin>>arr[i];
        if(arr[i] == 1) cnt++;
    }
    if(cnt > 0){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
    return 0;
}