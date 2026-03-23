#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    cout<<n<<" ";
    while(n != 1){
        if(n % 2 == 0){
            //EVEN case
            n = n / 2;
        }else{
            //ODD case
            n = (n * 3) + 1;
        }
        cout<<n<<" ";
    }
    return 0;
}