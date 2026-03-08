#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin>>t;
    while(t--){
        long long n , k;
        cin>>n >>k;
        vector<long long> arr(n);
            for(int j = 0 ; j < n ; j++){
                cin>>arr[j];
            }
            if(k == 1){
                vector<long long> arr1 = arr;
                sort(arr1.begin() , arr1.end());
                
                bool isSorted = true;
                for(int j = 0 ; j < arr.size(); j++){
                    if(arr[j] != arr1[j]){
                        isSorted = false;
                        break;
                    }
                }
                if(isSorted){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            } else if(k >=2){
                cout<<"YES"<<endl;
            }
    }
    return 0;
}