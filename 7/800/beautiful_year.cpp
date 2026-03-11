#include<bits/stdc++.h>
using namespace std;

bool isDis(int k){
    bool seen[10] = {false};
    while(k > 0){
        int dig = k % 10;
        if(seen[dig]) return false;
        seen[dig] = true;
        k /= 10;
    }
    return true;
}

int main(){
    int n; cin>>n;
    int k = n + 1;
    while(!isDis(k)){
        k++;
    }
    cout<<k<<endl;
    return 0;
}