#include <bits/stdc++.h>
using namespace std;

// 136. Single Number
void single(vector<int> &arr,int n){
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=arr[i];
        }
        cout<< ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    single(arr,n);
}