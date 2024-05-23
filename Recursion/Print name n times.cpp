#include<bits/stdc++.h>
using namespace std;
int cnt=1;
string name;
void print(int n){
    if(cnt==n+1){
        return;
    }
    cout<<name<<" ";
    cnt++;
    print(n);
}
int main(){
    int n;
    cin>>name>>n;
    print(n);
    
}