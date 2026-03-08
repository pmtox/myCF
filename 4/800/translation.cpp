#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s , l;
    cin>>s;
    cin>>l;
    if(l.size() != s.size()){
        cout<<"NO";
        return 0;
    }
    int cnt = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == l[s.size() - 1 - i]){

            // l[s.size() - 1 - i] -> IT IS USED TO CHECK WITH REVERSE ORDER
            
            cnt++;
        }
    }
    if(cnt == s.size()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}