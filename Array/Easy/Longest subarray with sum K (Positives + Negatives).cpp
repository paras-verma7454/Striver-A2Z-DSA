#include <bits/stdc++.h>
using namespace std;

void longestSubarrayWithSumK(vector<int>& arr, int k){
    unordered_map<int,int> mpp;
    int sum=0;
    int len=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==k){
            len=max(len,i+1);
        }
        int rem=sum-k;
        if(mpp.find(rem)!= mpp.end()){
            len=max(len,i-mpp[rem]); 
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }
    }
    cout<<len;
}

int main(){
    int n,k;
    cin >>n>>k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    longestSubarrayWithSumK(arr,k);

}