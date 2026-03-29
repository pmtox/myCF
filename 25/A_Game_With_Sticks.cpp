#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;

    int maxi = min(n , m);

    if(maxi % 2 == 0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}