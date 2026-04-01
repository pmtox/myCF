#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    long long left = 0, right = *max_element(arr.begin(), arr.end());
    long long ans = 0;
    
    while(left <= right) {
        long long mid = left + (right - left) / 2;
        
        if(mid == 0) {
            // 0 days always possible
            ans = mid;
            left = mid + 1;
            continue;
        }
        
        long long total_people = 0;
        for(int i = 0; i < n; i++) {
            total_people += arr[i] / mid;
        }
        
        if(total_people >= m) {
            ans = mid;      // this D works, try larger
            left = mid + 1;
        } else {
            right = mid - 1; // this D too large, try smaller
        }
    }
    
    cout << ans << endl;
    return 0;
}