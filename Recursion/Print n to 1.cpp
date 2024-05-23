#include<bits/stdc++.h>
using namespace std;
int n;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}
int main(){
    cin>>n;
    print(n);
    
}