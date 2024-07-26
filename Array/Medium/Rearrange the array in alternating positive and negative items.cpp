#include <bits/stdc++.h>
using namespace std;

// 2149. Rearrange Array Elements by Sign

vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int pos=0,neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
            ans[neg]=nums[i];
            neg+=2;
            }
            else{
            ans[pos]=nums[i];
            pos+=2;
            }
        }
        return ans;
    }

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans=rearrangeArray(nums);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}