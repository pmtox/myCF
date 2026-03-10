#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin>>t;
    while(t--){
        int n , x;
        cin>>n >>x;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        int gap1 = arr[0] - 0;
        int gap2 = 0;
        for(int i = 1 ; i < n ; i++){
            int gap = arr[i] - arr[i-1];
            if(gap > gap2){
                gap2= gap;
            }
        }
        int gap3 = 2 * (x - arr[n-1]);
        
        cout<<max(max(gap1 , gap2) , gap3)<<endl;
    }
    return 0;
}