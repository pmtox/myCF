#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin() , arr.end());

        for(int i = 0 ; i < arr.size(); i++){
            if(arr[i] <= c){
                long long diff = c - arr[i];
                c+= arr[i];
                if(diff > k){
                    c+=k;
                    k= 0;
                }
                else{
                    c+=diff;
                    k-=diff;
                }
            }
        }
        cout<< c <<endl;
    }
    return 0;
}