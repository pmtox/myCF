#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n , k; cin>>n>>k;
        vector<int >arr(n);
        for(int i = 0 ; i< n ; i++){
            cin>>arr[i];
        }
        sort(arr.begin() , arr.end());

        int rem = n - k;
        int med = (rem + 1) / 2;
        int lft = med -1;
        int rgt = n- (rem - med) -1;

        set<int>ans;
        for(int i = lft ; i <= rgt ; i++){
            ans.insert(arr[i]);
        }
        for(int vec : ans){
            cout<<vec<<" ";
        }
        cout<<endl;

    }
    return 0;
}