#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    char s[n+1];
    cin>>s;
    int cnt = 0;
    for(int i = 1 ; i < n; i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}