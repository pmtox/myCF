#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string k= "";
    for(int i = 0; i < s.size();i++){
        if(s[i] == '.'){
            k += '0';
        }
        if(s[i] == '-'){
            i++;
            if(s[i] == '.'){
                k+='1';
            }
            else{
                k+='2';
            }
        }
    }
    cout<<k<<endl;
    return 0;
}