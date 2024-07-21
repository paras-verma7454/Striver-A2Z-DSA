#include <bits/stdc++.h>
using namespace std;

// 169. Majority Element

int MajElem(vector<int> &nums){
    int n = nums.size();
    int cnt = 0;
    int ele;
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            ele = nums[i];
        } else if (nums[i] == ele) {
            cnt++;
        } else
            cnt--;
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == ele)
            cnt1++;
        if (cnt1 > n / 2)
            return ele;
    }
    return -1;
    
    
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
