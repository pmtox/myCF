#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        sort(arr.begin() , arr.end() , greater<>());
        // for(int i = 0 ; i < n ; i++){
        //     cout<<arr[i]<<" ";
        // }
        
        if(arr[0] == arr[n-1]){
            cout<<"NO"<<endl;
            continue;
        }
        
        if(arr[0] == arr[1]) {
            swap(arr[1], arr[n-1]);
        }
        
        long long sum = 0;
        bool ugly = false;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == sum){
                ugly = true;
                break;
            }
            sum+= arr[i];
        }
        
        if(!ugly){
            cout << "YES" << endl;
            for(int i = 0; i< n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        
        if(ugly) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}