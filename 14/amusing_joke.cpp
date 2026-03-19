#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 , s2 , s3; cin>>s1>>s2>>s3;
    string k = s1+s2;
    unordered_map<char , int> mpp1;
    for(char i : s3){
        mpp1[i]++;
    }
    unordered_map<char , int> mpp2;
    for(char i : k){
        mpp2[i]++;
    }
    if(mpp1 == mpp2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}