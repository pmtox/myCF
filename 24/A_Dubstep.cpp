#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int i = 0;
    string k;
    string ans;
    while(i < s.size()){
        if(i+2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(!k.empty() && k.back() != ' '){
                k += ' ';
            }
            i+=3;
        }
        else{
            k += s[i];
            i++;
        }
    }
    cout<<k;
    return 0;
}