// RING NUMBER FORMULA
/* min(i, 9-i) = distance from top/bottom border

min(j, 9-j) = distance from left/right border

The smallest of these 4 tells you which ring you're in

Add 1 because outermost is ring 1 */ 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char grid[10][10];
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }
        
        long long total = 0;
        
        for(int i = 0 ; i < 10; i++){
            for(int j = 0 ; j < 10 ; j++){
                if(grid[i][j] == 'X'){
                    long long ans = min({i , j , 9-i , 9-j})+1;
                    total+= ans;
                }
            }
        }
        cout<<total<<endl;
        
    }
}