#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n , m , a , b , c;
        cin>>n>>m>>a>>b>>c;
        int k = min(n , m);

        cout<<k * c + (n - k) * a + (m - k) * b<<endl;
    }
    return 0;
}