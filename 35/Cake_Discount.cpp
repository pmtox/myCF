#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    if(n < 5){
        cout<<n * 100<<endl;
    }
    else if(n >= 5){
        cout<<n* 85<<endl;
    }
    return 0;
}