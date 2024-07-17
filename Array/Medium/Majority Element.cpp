#include <bits/stdc++.h>
using namespace std;

// 169. Majority Element

int MajElem(vector<int> &nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    return nums[n/2];
    
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int max =MajElem(nums);
    cout<<max;
}