#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        cin>>s;
        int dotCnt = 0;
        bool actions = false;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '.'){
                dotCnt++;
            }
        }
        bool tripleSeg = false;
        int i = 1;
        while(i < n-1){
            if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
                tripleSeg = true;
                break;
            }
            i++;
        }
        if(tripleSeg){
            cout<<"2"<<endl;
        }else{
            cout<<dotCnt<<endl;
        }
    }
    return 0;
}