#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isLucky = true;
    while(n>0){
        int dig = n % 10;
        if(dig != 4 && dig != 7){
            isLucky = false;
        }
        n = n/10;
    }
    if(!isLucky) cout<< "NO";
    else cout<<"YES";
}