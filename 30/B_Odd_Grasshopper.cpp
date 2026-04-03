#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>>t;
    while(t--){
        long long x , n;
        cin>>x>>n;
        long long dic = n % 4;

        if(x % 2 == 0){ // FOR EVEN
            if(dic == 0) x += 0;
            else if(dic == 1) x -= n;
            else if(dic == 2) x += 1;
            else x += n + 1;
        }
        else{ // FOR ODD
            if(dic == 0) x += 0;
            else if(dic == 1) x += n;
            else if(dic == 2) x -= 1;
            else x -= n+1;
        }
        
        cout<<x<<endl;
    }
    return 0;
}