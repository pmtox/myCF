#include<iostream>
using namespace std;
int main(){
    int t ;cin>>t;
    while(t--){
        long long n; cin>>n;
        long long l , r;
        
        if(n > 0){
            l = -n+1;
            r = n;
        }
        else if( n < 0){
            l = n;
            r = -n-1;
        }else{
            l = -1;
            r = 1;
        }
        cout<<l << " "<<r<<endl;
    }
    
    return 0;
}