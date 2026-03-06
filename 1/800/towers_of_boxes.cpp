#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    long long t; cin>>t;
    while(t--){
        int n , m , d;
        cin>>n>>m>>d;
        int maxHeight = d/m + 1;
        int towers = (n + maxHeight - 1) / maxHeight;
        cout<<towers<<endl;
    }
    return 0;
}