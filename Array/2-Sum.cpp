#include <bits/stdc++.h>
using namespace std;

// 1. Two Sum

void TwoSum(vector<int> &nums,int target){
    map<int,int> mpp;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int num=nums[i];
        int rem = target-num;
        if(mpp.find(rem)!=mpp.end()){
        cout<<mpp[rem]<<" "<< i;
        return;
        }
            mpp[num]=i;
        }
    cout<<"{-1,-1}";
}





int main(){
    int n,target;
    cin>>n>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    TwoSum(nums,target);
}