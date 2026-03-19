#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long a , b , c , d;
        cin>>a>>b>>c>>d;
        
        if(b > d){
            cout<<-1<<endl;
            continue;
        }
        long long p = d - b;
        
        if(a+p < c){
            cout<<-1<<endl;
            continue;
        }
        long long q = (a+p) - c;
        cout<<p+q<<endl;
    }
    return 0;
}