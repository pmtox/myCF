

#include<bits/stdc++.h>
using namespace std;

// THIS APPROACH HANDLES NEGATIVES TOO
void DP(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = INT_MIN;
    int maxP = arr[0];
    int minP = arr[0];

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < 0) swap(maxP , minP);

        maxP = max(arr[i] , arr[i] * maxP);
        minP = min(arr[i] , arr[i] * minP);

        ans = max(ans , maxP);
    }
    cout<<ans<<endl;
}


// THIS APPROACH FAILS HANDELING NEGATIVE NUMBERS:
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    int ans = INT_MIN;
    int pre = 1; int suf = 1;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        if(pre == 0) pre = 1;
        if(suf == 0) suf = 1;
        pre*= arr[i];
        suf*= arr[n - i - 1];
        ans = max(ans , max(pre , suf));
    }
    cout<<ans<<endl;
}
int main(){
    //[n - i - i] = suffix
    solve();
    DP();
    return 0;
}