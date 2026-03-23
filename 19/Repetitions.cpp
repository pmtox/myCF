#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    long long cnt = 1;
    long long max_count = 1;
    for(int i = 1 ; i < s.size(); i++){
        if(s[i] == s[i-1]){
            cnt++;
            max_count = max(max_count , cnt);
        }else{
            cnt = 1;
        }
    }
    cout<<max_count;
    return 0;
}