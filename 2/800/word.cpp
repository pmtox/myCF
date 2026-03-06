#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int cnt1 = 0 , cnt2 =0;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cnt1++;
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            cnt2++;
        }
    }
    if(cnt1 > cnt2) {
        for(int i = 0 ; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i = 0 ; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}