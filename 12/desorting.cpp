#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i = 0 ; i < n ;i++){
            cin>>arr[i];
        }
        
        bool isNot = false;
        for(int i = 0; i < n-1 ; i++){
            if(arr[i]> arr[i+1]){
            	isNot = true;
			}
        }
        
        if(isNot){
        	cout<<0<<endl;
		}else{
			long long ans = INT_MAX;
			for(int i = 0 ; i < n-1 ; i++){
				int diff = arr[i+1] - arr[i];
				long long mg = (diff / 2) + 1;
				ans = min(mg , ans); 
			}
			cout<<ans<<endl;
		}
    }
    return 0;
}