#include<iostream>
using namespace std;
int main(){
    long long int n , k;
    cin>>n >>k;
    while(k>0){
        int dig = n %10;
        // cout<<dig<<endl;
        if(dig > 0){
            dig = dig- 1;
            n = n / 10;
            n = (n * 10) + dig;
        }
        else if(dig == 0){
            n = n/10;
        }
        k--;
    }
    cout<<n<<endl;
    return 0;
}