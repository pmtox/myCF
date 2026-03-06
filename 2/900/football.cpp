#include<iostream>
using namespace std;
int main(){
    string s ; cin>>s;
    int cnt1 = 0 , cnt2 =0;
    bool dang = false;
    for(int i = 0 ; i< s.size(); i++){
        if(s[i] == '1'){
            cnt1++;
            cnt2 = 0;
        }else if(s[i] == '0'){
            cnt2++;
            cnt1= 0;
        }
        if(cnt1 >= 7 || cnt2 >= 7){
            dang = true;
            break;
        }
    }
    if(dang) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}