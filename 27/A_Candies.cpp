#include<bits/stdc++.h>
using namespace std;
int main(){
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);

        int t;cin>>t;
        while(t--){
            long long n; cin>>n;
            for(int i = 2 ; i < 30 ; i++){
                int simp = pow(2 , i) - 1;
                if(n % simp == 0){
                    cout<<n / simp<<endl;
                    break;
                }
            }
        }
    return 0;
}