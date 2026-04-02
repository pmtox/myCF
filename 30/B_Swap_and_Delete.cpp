#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long cnt1 = 0 , cnt0 = 0;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '1') cnt1++;         
            else cnt0++;
        }
        long long i;
        for(i = 0 ; i < s.size() ; i++){
            if(s[i] == '0') {
                if(cnt1 > 0){
                    cnt1--;
                }
                else{
                    break;
                }
            }
            else if(s[i] == '1') {
                if(cnt0 > 0){
                    cnt0--;
                }
                else{
                    break;
                }
            }
            // if anytime any of the count come to zero? 
            // we just break the loop.
        }
        cout<<s.size() - i<<endl;
    }
    return 0;
}