#include<bits/stdc++.h>
using namespace std;
void Union(vector<int>& arr1, vector<int>& arr2,int n,int m){
    set<int> st;
    vector<int> Union;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }
    int j=0;
    for(auto it:st){
        Union.push_back(it);
    }
    int s=Union.size();
    for(int i=0;i<s;i++){
        cout<<Union[i]<<" ";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    Union(arr1,arr2,n,m);
}