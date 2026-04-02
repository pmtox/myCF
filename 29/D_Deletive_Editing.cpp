#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        string s ,t;
        cin>>s>>t;

        map<char , int> smpp;
        map<char , int> tmpp;

        for(auto it : s){
            smpp[it]++;
        }
        for(auto it : t){
            tmpp[it]++;
        }  

        int i = 0; int j = 0;
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j]){
                if(smpp[s[i]] < tmpp[t[j]]){
                    break;
                }

                if(smpp[s[i]] == tmpp[t[j]]){
                    tmpp[t[j]]--;
                    j++;
                }
            }
            smpp[s[i]]--;
            i++;
        }
        if(j == t.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}