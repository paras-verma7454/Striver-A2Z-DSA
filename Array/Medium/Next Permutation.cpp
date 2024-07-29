#include <bits/stdc++.h>
using namespace std;

// 31. Next Permutation

vector<int> nextPermutation(vector<int>& nums) {
    int index=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        for(int i =n-1;i>=index && index !=-1;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    nextPermutation(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}