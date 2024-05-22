#include<bits/stdc++.h>
using namespace std;
int cnt=1;
void print(int n){
    if(cnt==n+1){
        return;
    }
    cout<<cnt<<" ";
    cnt++;
    print(n);
}
int main(){
    int n;
    cin>>n;
    print(n);
    
}