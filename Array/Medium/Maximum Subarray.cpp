#include <bits/stdc++.h>
using namespace std;

//53. Maximum Subarray
// Kadane's Algorithm
int MaxSub(vector<int> &nums){
    int sum=0,maxSum=INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum=max(nums[i],sum+nums[i]);
        maxSum=max(sum,maxSum);
    }
    return maxSum;
}





int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int max =MaxSub(nums);
    cout<<max;
}