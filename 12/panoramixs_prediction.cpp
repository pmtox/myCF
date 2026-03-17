#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2 ; i*i <= n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int a , b;
    cin>>a>>b;
    
    if(!isPrime(b)){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = a+1; i < b; i++){
        if(isPrime(i)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}