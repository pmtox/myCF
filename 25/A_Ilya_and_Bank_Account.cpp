#include<bits/stdc++.h>
using namespace std;
int main(){
        long long n;cin>>n;
        if(n > 0){
            cout<<n<<endl;
            return 0;
        }

        int dig1 = n % 10;
        n /= 10;

        int dig2 = n % 10;
        n /= 10;

        int n1 = n*10 + dig1;
        int n2 = n*10 + dig2;
        if(n1 > n2){
            cout<< n1 <<endl;
        }else{
            cout<< n2 <<endl;
        }

    return 0;
}