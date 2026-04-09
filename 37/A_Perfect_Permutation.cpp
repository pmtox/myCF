#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr;
    if(n % 2 == 1) {cout<<-1<<endl; return 0;}

    for(int i = 1 ; i <= n ; i++){
        arr.push_back(i);
    }

    for(int i = 0; i < arr.size() - 1 ; i+=2){
        swap(arr[i+1] , arr[i]);
    }
    for(int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}