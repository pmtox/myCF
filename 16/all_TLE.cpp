#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <algorithm>
#include <iterator>
#include <limits>
#include <math.h>
#include <unordered_map>
#include <iomanip>
// #include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b,a%b);
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) {

        // 1. Halloumi Boxes

        // int n , k;
        // cin >> n >> k;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // if(k == 1) {
        //     bool chk = true;
        //     for(int i = 1 ; i < n ; i++) {
        //         if(a[i] < a[i-1]) {
        //             chk = false;
        //             break;
        //         }
        //     }
        //     if(chk) cout << "YES" << endl;
        //     else cout << "NO" << endl;
        // } else cout << "YES" << endl;

        // 2. Line Trip

        // int n , x;
        // cin >> n >> x;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // int p = 0, ans = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     ans = max(ans,a[i]-p);
        //     p = a[i];
        // }
        // cout << max(ans,2*(x-p)) << endl;

        // 3. Cover in Water
        
        // int n;
        // cin >> n;
        // string s;
        // cin >> s;
        // int ans = 0, curr = 0, mx = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     if(s[i] == '.') {
        //         curr++;
        //     } else {
        //         ans += curr;
        //         mx = max(mx,curr);
        //         curr = 0;
        //     }
        // }
        // ans += curr;
        // mx = max(mx,curr);
        // if(mx > 2) {
        //     cout << "2" << endl;
        // } else {
        //     cout << ans << endl;
        // }

        // 4. Game with Integers

        // int n;
        // cin >> n;
        // if(n % 3 == 0) cout << "Second" << endl;
        // else cout << "First" << endl;

        // 5. Jagged Swaps

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // if(a[0] == 1) cout << "YES" << endl;
        // else cout << "NO" << endl;

        // 6. Doremy's Paint 3

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // map<int,int> mp;
        // for(int i = 0 ; i < n ; i++) mp[a[i]]++;
        // if(mp.size() > 2) cout << "NO" << endl;
        // else if(mp.size() == 2) {
        //     if(mp[mp.begin()->first] == n/2 || mp[mp.rbegin()->first] == n/2) cout << "YES" << endl;
        //     else cout << "NO" << endl;
        // } else {
        //     cout << "YES" << endl;
        // }

        // 7. Don't try to count

        // int n , m;
        // cin >> n >> m;
        // string x, s;
        // cin >> x >> s;
        // int ans = 0;
        // bool chk = false;
        // for(int i = 0 ; i <= x.length()-s.length() && x.length() >= s.length() ; i++) {
        //     if(x.substr(i,s.length()) == s) {
        //         chk = true;
        //         break;
        //     }
        // }
        // while(x.length() < 100 && !chk) {
        //     x = x + x;
        //     ans++;
        //     for(int i = 0 ; i <= x.length()-s.length() && x.length() >= s.length() ; i++) {
        //         if(x.substr(i,s.length()) == s) {
        //             chk = true;
        //             break;
        //         }
        //     }
        //     if(chk) break;
        // }
        // if(chk) cout << ans << endl;
        // else cout << "-1" << endl;

        // 8. How Much Does Daytona Cost?

        // int n , k;
        // cin >> n >> k;
        // bool chk = false;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) {
        //     cin >> a[i];
        //     if(a[i] == k) chk = true;
        // }
        // if(chk) cout << "YES" << endl;
        // else cout << "NO" << endl;

        // 9. Goals of Victory

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // int sum = 0;
        // for(int i = 0 ; i < n-1 ; i++) {
        //     cin >> a[i];
        //     sum += a[i];
        // }
        // cout << (0-sum) << endl;

        // 10. Target Practice

        // vector<vector<char>> v(10,vector<char>(10));
        // int ans = 0;
        // for(int i = 0 ; i < 10 ; i++) {
        //     for(int j = 0 ; j < 10 ; j++) {
        //         cin >> v[i][j];
        //         if(v[i][j] == 'X') {
        //             if(i == 0 || j == 0 || i == 9 || j == 9) ans++;
        //             else if(i == 1 || j == 1 || i == 8 || j == 8) ans += 2;
        //             else if(i == 2 || j == 2 || i == 7 || j == 7) ans += 3;
        //             else if(i == 3 || j == 3 || i == 6 || j == 6) ans += 4;
        //             else ans += 5;
        //         }
        //     }
        // }
        // cout << ans << endl;

        // 11. Ambitious Kid

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // int ans = 1e9;
        // for(int i = 0 ; i < n ; i++) {
        //     cin >> a[i];
        //     ans = min(ans,abs(a[i]));
        // }
        // cout << ans << endl;

        // 12. Sequence Game

        // int n;
        // cin >> n;
        // vector<int> b(n);
        // for(int i = 0 ; i < n ; i++) cin >> b[i];
        // vector<int> a;
        // a.push_back(b[0]);
        // for(int i = 1 ; i < n ; i++) {
        //     if(b[i] >= a.back()) a.push_back(b[i]);
        //     else {
        //         a.push_back(b[i]);
        //         a.push_back(b[i]);
        //     }
        // }
        // cout << a.size() << endl;
        // for(int i = 0 ; i < a.size() ; i++) {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        // 13. United We Stand
        
        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // map<int,int> mp;
        // for(int i = 0 ; i < n ; i++) {
        //     mp[a[i]]++;
        // }
        // if(mp.size() == 1) cout << "-1" << endl;
        // else {
        //     cout << mp.begin()->second << " " << n-mp.begin()->second << endl;
        //     int x = mp.begin()->second;
        //     while(x--) {
        //         cout << mp.begin()->first << " ";
        //     }
        //     cout << endl;
        //     for(int i = 0 ; i < n ; i++) {
        //         if(a[i] != mp.begin()->first) cout << a[i] << " ";
        //     }
        //     cout << endl;
        // }

        // 14. Buttons

        // int a , b , c;
        // cin >> a >> b >> c;
        // int y = c/2;
        // int x = y;
        // if(c % 2) x++;
        // if(x+a > y+b) cout << "First" << endl;
        // else cout << "Second" << endl;

        // 15. Array coloring

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // int ans = 0;
        // for(int i = 0 ; i < n ; i++) ans += a[i];
        // if(ans % 2) cout << "NO" << endl;
        // else cout << "YES" << endl;

        // 16. Desorting

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // int ans = 1e9;
        // for(int i = 1 ; i < n ; i++) ans = min(ans,a[i]-a[i-1]);
        // if(ans < 0) cout << "0" << endl;
        // else cout << ans/2+1 << endl;

        // 17. Forbidden Integer

        // int n , k , x;
        // cin >> n >> k >> x;
        // if(x != 1) {
        //     cout << "YES" << endl;
        //     cout << n << endl;
        //     for(int i = 0 ; i < n ; i++) cout << "1 ";
        //     cout << endl;
        // } else {
        //     if(k == 1) cout << "NO" << endl;
        //     else if(n % 2 == 0) {
        //         cout << "YES" << endl;
        //         cout << n/2 << endl;
        //         for(int i = 0 ; i < n/2 ; i++) cout << "2 ";
        //         cout << endl;
        //     } else {
        //         if(n == 1) {
        //             cout << "NO" << endl;
        //         } else {
        //             if(k >= 3) {
        //                 int x = n/2;
        //                 cout << "YES" << endl;
        //                 cout << n/2 << endl;
        //                 for(int i = 0 ; i < x-1 ; i++) cout << "2 ";
        //                 cout << "3 ";
        //                 cout << endl;
        //             } else {
        //                 cout << "NO" << endl;
        //             }
        //         }
        //     }
        // }

        // 18. Grasshopper on a Line

        // int x , k;
        // cin >> x >> k;
        // if(x % k != 0) {
        //     cout << "1 " << endl;
        //     cout << x << endl;
        // } else {
        //     if((x-1)%k == 0) {
        //         cout << "2 " << endl;
        //         cout << "2 " << x-2 << endl; 
        //     } else {
        //         cout << "2 " << endl;
        //         cout << "1 " << x-1 << endl; 
        //     }
        // }

        // 19. Unit array

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // int p = 0 , ne = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     if(a[i] > 0) p++;
        //     else ne++;
        // }
        // int ans = 0;
        // if(ne % 2) {
        //     ans++;
        //     ne--;
        //     p++;
        // }
        // while(p < ne) {
        //     ans += 2;
        //     p += 2;
        //     ne -= 2;
        // }
        // cout << ans << endl;

        // 20. Twin Permutations

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // for(int i = 0 ; i < n ; i++) cout << (n+1-a[i]) << " ";
        // cout << endl;

        // 21. Blank Space

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // int ans = 0, curr = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     if(a[i] == 0) {
        //         curr++;
        //     } else {
        //         ans = max(ans,curr);
        //         curr = 0;
        //     }
        // }
        // cout << max(ans,curr) << endl;        

        // 22. Coins

        // int n, k;
        // cin >> n >> k;
        // if(n % 2) {
        //     if(n < k) cout << "NO" << endl;
        //     else if(k % 2) cout << "YES" << endl;
        //     else cout << "NO" << endl;
        // } else {
        //     cout << "YES" << endl;
        // }

        // 23. Walking Master

        // int a, b, c, d;
        // cin >> a >> b >> c >> d;
        // int x = abs(c-a), y = abs(d-b);
        // if((d-b) >= 0 && (c-a) <= abs(y)) {
        //     cout << abs(y) + abs(abs(y)+a-c) << endl;
        // } else {
        //     cout << "-1" << endl;
        // }

        // 24. We Need the Zero

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // int ans = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     cin >> a[i];
        //     ans = ans xor a[i];
        // }
        // if(ans == 0) cout << "0" << endl;
        // else {
        //     if(n % 2 == 0) cout << "-1" << endl;
        //     else cout << ans << endl;
        // }

        // 25. Prepend and Append

        // int n;
        // cin >> n;
        // string s;
        // cin >> s;
        // int i = 0, j = n-1;
        // while(i < j) {
        //     if(s[i] != s[j]) {
        //         i++;
        //         j--;
        //     } else {
        //         break;
        //     }
        // }
        // cout << j-i+1 << endl;

        // 26. Serval and Mocha's Array

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // bool chk = false;
        // for(int i = 0 ; i < n ; i++) {
        //     for(int j = i+1 ; j < n ; j++) {
        //         if(gcd(a[i],a[j]) <= 2) {
        //             chk = true;
        //             break;
        //         }
        //     }
        // }
        // if(chk) cout << "YES" << endl;
        // else cout << "NO" << endl;

        // 27. One and Two

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // int c = 0;
        // for(int i = 0 ; i < n ; i++) if(a[i] == 2) c++;
        // if(c % 2) cout << "-1" << endl;
        // else {
        //     int x = 0;
        //     for(int i = 0 ; i < n ; i++) {
        //         if(a[i] == 2) x++;
        //         if(x == c/2) {
        //             cout << i+1 << endl;
        //             break;
        //         }
        //     }
        // }

        // 28. Make it Beautiful

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // sort(a.begin(),a.end());
        // if(a[0] == a[n-1]) cout << "NO" << endl;
        // else {
        //     cout << "YES" << endl;
        //     cout << a[n-1] << " ";
        //     for(int i = 0 ; i < n-1 ; i++) cout << a[i] << " ";
        //     cout << endl;
        // }

        // 29. Everybody Likes Good Arrays!

        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for(int i = 0 ; i < n ; i++) cin >> a[i];
        // int ans = 0, c = 1, p = a[0]%2;
        // for(int i = 1 ; i < n ; i++) {
        //     if(a[i] % 2 == p) {
        //         c++;
        //     } else {
        //         ans += c-1;
        //         c = 1;
        //         p = 1-p;
        //     }
        // }
        // cout << ans+c-1 << endl;

        // 30. Extremely Round

        // int n;
        // cin >> n;
        // int ans = 0;
        // for(int i = 0 ; i < 6 ; i++) {
        //     int x = 0;
        //     for(int j = 1 ; j < 10 ; j++) {
        //         x = j;
        //         x *= pow(10,i);
        //         if(x <= n) ans++;
        //     }
        // }
        // cout << ans << endl;

        // 31. Two Permutations

        // int n, a, b;
        // cin >> n >> a >> b;
        // if(a+b == 2*n) cout << "YES" << endl;
        // else if(a+b >= n) cout << "NO" << endl;
        // else if((n-a-b) > 1) cout << "YES" << endl;
        // else cout << "NO" << endl;
    }
    return 0;
}