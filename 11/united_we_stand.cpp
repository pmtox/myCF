#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long>arr(n);
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        
        vector<long long> b;
        vector<long long> c;
        
        long long index = 0;
        while(index < n && arr[index] == arr[0]){
            b.push_back(arr[index]);
            index++;
        }
        while(index < n){
            c.push_back(arr[index]);
            index++;
        }
        
        if(c.size() == 0){
            cout<<-1<<endl;
        }else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it: b){
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it : c){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}