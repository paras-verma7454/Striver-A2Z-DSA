#include <bits/stdc++.h>
using namespace std;
void Union(vector<int> &arr1, vector<int> &arr2, int n, int m){
    vector<int> Union;
    int i = 0;
    int j = 0;
    while (i < n && j < m){
        if (arr1[i] <= arr2[j]){
            if (Union.size() == 0 || Union.back() != arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if (Union.size() == 0 || Union.back() != arr2[j]){
                Union.push_back(arr2[j]);
                
            }
            j++;
        }
    }
    while (i < n){
        if (Union.size() == 0 || Union.back() != arr1[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m){
        if (Union.size() == 0 || Union.back() != arr2[j]){
            Union.push_back(arr2[j]);
        } 
        j++;
    }
    cout << "Union: ";
    for (int i = 0; i < Union.size(); i++){
        cout << Union[i] << " ";
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    Union(arr1, arr2, n, m);
}