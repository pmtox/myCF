#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;
    long long c = 0;
    int cnt= 0;
    vector<int> arr(t);
    for(int i = 0 ; i< t ; i++){
        cin>>arr[i];
    }
    long long total_sum = 0;
    for(int i = 0 ;i <arr.size(); i++){
        total_sum+=arr[i];
    }
    sort(arr.begin() , arr.end() , greater<>());
    int exceedSum = total_sum / 2;
    for(int i = 0 ; i < arr.size(); i++){
        c+= arr[i];
        cnt++;
        if(c > exceedSum){
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}