#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }


    long long maxi = 1;
    long long cnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] >=arr[i-1]){
            cnt++;
            maxi = max(cnt , maxi);
        }
        else{
            cnt = 1;
        }
    }
    cout<<maxi<<endl;
    return 0;
}