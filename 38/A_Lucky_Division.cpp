#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    bool flg = 1;
    int arr[12] = {4 , 7 , 47 , 74 , 774 , 447 , 77 , 44 , 744 , 477 , 777 , 444};

    // All numbers having 7 and 4 as divisions 
    // n (1 ≤ n ≤ 1000) constraints 

    for(int i = 0 ; i < 12 ; i++){
        if(n % arr[i] == 0) flg = 0;
    }
    if(!flg) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}