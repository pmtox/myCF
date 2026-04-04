#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){

        int n ; cin>>n;

        vector<int> arr;
        for(int i = 1; i <= n ; i++){
            arr.push_back(3*n - 2*(i - 1) - 1);
            arr.push_back(3*n - 2*(i-1));
            arr.push_back(i);
        }

        for(int i : arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}