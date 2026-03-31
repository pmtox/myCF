#include<bits/stdc++.h>
using namespace std;
int main(){
        long long n , m;
        cin>>n>>m;
        long long cnt = 0;
        for(int i = 1 ; i <= n; i++){
            if(i % m == 0) n++;
            cnt++;
        }

        cout<<cnt;

    return 0;
}