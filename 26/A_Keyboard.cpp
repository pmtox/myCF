#include<bits/stdc++.h>
using namespace std;
int main(){
        char c , i; cin>>c;
        string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
        while(cin>>i){
            cout<<s[s.find(i) - (c=='R') + (c == 'L')];
            // RIGHT IF R LEFT IF L !!

        }
    return 0;
}