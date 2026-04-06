#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int>arrx(n);
        vector<int>arry(n);
        vector<int>arrz(n);
        long long sumx = 0 ,sumy = 0 , sumz = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arrx[i];
            cin>>arry[i];
            cin>>arrz[i];
        }
        for(int i = 0 ; i < n ; i++){
            sumx+=arrx[i];
            sumy+=arry[i];
            sumz+=arrz[i];
        }
        if(sumx == 0 && sumy == 0 && sumz == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}