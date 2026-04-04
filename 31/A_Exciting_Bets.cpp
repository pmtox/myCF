#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;

        if(a == b) cout<<"0 0"<<endl;
        else{
            long long d = abs(a - b);

            long long k = min(a % d , d - (a % d));
            cout<<d << " "<<k<<endl;
        }

        /*
            a = 1 b = 2

           | a - b | = 1 = d
        
            1 % 1 , 1 - ( 1 % 1 ) = (0 , 1) 
            
            1 , 0;
        
        */
    }
    return 0;
}