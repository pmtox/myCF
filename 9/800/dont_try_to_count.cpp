#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;cin>>s;
        string s1; cin>>s1;
        bool x = false;
        
        for(int i = 0 ; i <= 5; i++){
            if(s.find(s1) != string::npos){
                cout<<i<<endl;
                x = true;
                break;
            }
            else{
                s+=s;
            }
        }
        if(!x){
             cout<<-1<<endl; 
        }
        
    }
    return 0;
}