#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 , s2; cin>>s1>>s2;
    string k = "";
    for(int i = 0 ; i < s1.size(); i++){
        if(s1[i] == s2[i]){
            k+='0';
        }else{
            k+='1';
        }
    }
    cout<<k<<endl;
    return 0;
}