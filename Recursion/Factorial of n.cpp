#include<bits/stdc++.h>
using namespace std;
int fac=1;
int S(int n){
    if(n==0){
        return fac;
    }
    fac*=n;
    S(n-1);
    
}
int main(){
    int n;
    cin>>n;
    int fac = S(n);
    cout<<fac;
}