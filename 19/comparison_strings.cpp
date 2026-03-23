#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t;
    while(t--){
        long long n; cin>>n;
        string s; cin>>s;
        
        int cnt = 1;
        int maxCnt =  1;
        for(int i = 1 ; i < n ; i++){
            if(s[i] == s[i-1]){
                cnt++;
                maxCnt = max(cnt , maxCnt);
            }
            else{
                cnt = 1;
            }
        }
        
        cout<<maxCnt + 1<<endl;
        }
    return 0;
}