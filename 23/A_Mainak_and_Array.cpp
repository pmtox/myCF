#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> arr(n) , arr2(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        for(int i = 0 ; i < n ; i++){
            if(i == n-1){
                arr2.push_back(arr[n-1] - arr[0]);
            }
            else{
                arr2.push_back(arr[i] - arr[i+1]);
            }
        }
        if(arr.size() > 1){
            arr2.push_back(*max_element(arr.begin() + 1 , arr.end()) - arr[0]);
            arr2.push_back(arr[n-1] - *min_element(arr.begin() , arr.end() - 1));
        }
        cout<<*max_element(arr2.begin() , arr2.end())<<endl;
    }
    return 0;
}