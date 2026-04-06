#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string k = "hello";
    int c = 0;
    for(int i = 0 ;i < s.size(); i++){
        if(s[i] == k[c]) c++;
    }
    if(c==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}