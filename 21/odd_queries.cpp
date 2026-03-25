#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int j = 0; j < n; j++){
            cin >> v[j];
        }
        vector<long long> prefix(n + 1, 0);
        for (int j = 1; j <= n; j++){
            prefix[j] = prefix[j - 1] + v[j - 1];
        }
        for (int j = 0; j < q; j++){
            long long l, r, k, to_add, to_subtract, result;
            cin >> l >> r >> k;
            to_add = (r - l + 1) * k;
            to_subtract = prefix[r] - prefix[l - 1];
            result = prefix[n] - to_subtract + to_add;
            if (result % 2 != 0){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
            cout << endl;
        }
    }
    return 0;

}