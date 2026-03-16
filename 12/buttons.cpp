#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long a , b , c;
        cin>>a>>b>>c;
        
        long long sum = a + b;
        sum+= c;
        
        if(a > b){
            cout<<"First"<<endl;
        }else if(a < b){
            cout<<"Second"<<endl;
        }else{
            if(c % 2 == 1){
                cout<<"First"<<endl;
            }else{
                cout<<"Second"<<endl;
            }
        }
    }
    return 0;
}