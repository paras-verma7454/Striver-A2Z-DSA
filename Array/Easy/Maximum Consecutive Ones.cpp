#include <bits/stdc++.h>
using namespace std;

// 485. Max Consecutive Ones
void max(vector<int> &arr,int n){
    int cnt=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            if(cnt>max){
                max=cnt;
            }
        }
        else cnt=0;
    }
    cout << max;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    max(arr,n);
}