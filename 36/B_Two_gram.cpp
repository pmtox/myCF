#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    string s; cin>>s;

    unordered_map<string , int> mpp;
    for(int i = 0 ; i < n-1 ; i++){
        string two_s = s.substr(i , 2);
        mpp[two_s]++;
    }
    int maxCnt = 0;
    string bst;
    for(auto &i : mpp){
        if(i.second > maxCnt){
            maxCnt = i.second;
            bst = i.first;
        }
        else if(i.second == maxCnt && i.first < bst){
            bst = i.first;
        }
    }
    cout<<bst<<endl;

}