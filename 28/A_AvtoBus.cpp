#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        if(n % 2 != 0 || n < 4){
            cout<<-1<<endl;
        }
        else{

            long long maxi = n / 4;
            long long minii = n / 6;

            

            if(n%6 != 0){
                minii++;
            }
            cout<< minii /*ceil division can also be implemented as (n+5) / 6; */ << " " <<maxi <<endl;
        }
    }
    return 0;
}