#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;cin>>t;
	while(t--){
	    long long n , q;cin>>n>>q;
	    vector<long long>arr(n + 1);
	    for(int i = 1 ; i <= n ; i++){
	        cin>>arr[i];
	    }
	    vector<long long> psum(n+1);
	    for(int i = 1 ; i <= n ; i++){
	        psum[i] = psum[i-1] + arr[i];
	    }
	    while(q--){
	        long long l , r , k; cin>>l>>r>>k;
	        
	        long long st_seg = psum[l-1] + (psum[n] - psum[r]);
	        long long ans = st_seg + k*(r - l + 1);
	        
	        if(ans % 2 == 1){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
