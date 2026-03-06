#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int k , n , w;
    cin>>k>>n>>w;
    long long int sum = 0;
    for(int i = 1 ; i <= w ; i++){
        sum += k * i;
    }
    if(sum < n){
        cout<<0<<endl;
        return 0;
    }
    cout<<sum - n;
    return 0;
}