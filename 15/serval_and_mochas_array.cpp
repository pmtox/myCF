#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        int ress = 0;
        bool poss = false;
        for(int i = 0 ; i < n ; i++){
            ress = __gcd(ress , arr[i]);
        }
        
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(__gcd(arr[i] , arr[j])<= 2){
                    poss = true;
                    break;
                }
            }
        }
        
        if(poss && ress <= 2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}