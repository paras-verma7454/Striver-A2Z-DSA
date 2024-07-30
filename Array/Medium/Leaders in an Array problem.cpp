#include <bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> arr;
    int n=a.size();
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            arr.push_back(a[i]);
        }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> arr=superiorElements(a);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}