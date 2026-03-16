#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n , k , x;
        cin>>n>>k>>x;
        
        vector<long long>arr;
        bool possible = true;
        
        if(x != 1){
            for(int i = 0 ; i< n ; i++){
                arr.push_back(1);
            }
        }
        else if(k >= 2 && n % 2 == 0){
            for(int i = 0 ; i< n /2 ; i++){
                arr.push_back(2);
            }
        }
        else if(k >= 3){
            arr.push_back(3);
            for(int i = 0; i < (n-3)/2; i++){
                arr.push_back(2);
            }
        }
        else{
            cout<<"No"<<endl;
            continue;
        }
        
        cout<<"Yes"<<endl;
        cout<<arr.size()<<endl;
        for(int it : arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}