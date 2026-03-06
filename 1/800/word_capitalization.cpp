#include<bits/stdc++.h>

using namespace std;
int main(){
    string s , r;
    cin>>s;
    stringstream iss(s);
    char a;
    iss>>a;
    a = char( a & ~32);
    cout<<a;
    getline(iss , r);
    cout<<r<<endl;
    return 0;
}
