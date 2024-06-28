#include <bits/stdc++.h>
using namespace std;

// 1752. Check if Array Is Sorted and Rotated
bool check(vector<int>& nums) {
    int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            //if nums[0]>nums[1] then cnt++ 
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        // if last element is biggest then first element then cnt++
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1;
    }
    int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        check(nums);
    }