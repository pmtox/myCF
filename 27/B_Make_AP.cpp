#include<bits/stdc++.h>
using namespace std;
int main(){
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);

        int t;cin>>t;
        while(t--){
            int a , b , c;
            cin>>a>>b>>c;

            int A = b - (c - b);
            int B = a + (c - a) / 2;
            int C = b + (b - a);

            if(A && A % a == 0 && A >= a) cout<<"YES"<<endl;
            else if(B && B % b == 0 && B >= b && (c-a) %2 == 0) cout<<"YES"<<endl;
            else if(C && C % c == 0 && C >= c) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    return 0;
}