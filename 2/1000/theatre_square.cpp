#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n , m , a;
    cin>>n>>m>>a;
    long long int s1 = (n + a -1) / a;
    long long int s2 = (m + a -1) / a;
    cout<<s1* s2<<endl;
    return 0;
}

// ceil(n / a) = (n + a - 1) / a