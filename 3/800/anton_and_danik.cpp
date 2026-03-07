#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt1= 0 , cnt2 = 0;
    while(n--){
        string s;cin>>s;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'A'){
                cnt1++;
            }else if(s[i] == 'D'){
                cnt2++;
            }
        }    
    }
    if(cnt1 > cnt2){
        cout<<"Anton"<<endl;
    } else if(cnt1 < cnt2){
        cout<<"Danik"<<endl;
    } else if(cnt1 == cnt2){
        cout<<"Friendship"<<endl;
    }
    return 0;
}