#include<iostream>
#include<vector>
using namespace std;

const int N=1e6+5;

int main(){
    long long n , k;
    cin>>n>>k;
    long long int even = n / 2;
    long long int odd = (n+1)/2;
    if(k <= odd){
        cout<<2*k -1;
    }else{
        k-= odd;
        cout<<2*k<<endl;
    }
    return 0;
}