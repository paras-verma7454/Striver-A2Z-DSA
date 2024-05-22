#include<bits/stdc++.h>
using namespace std;


bool isArmstrong(int n) {
    int k=to_string(n).length();
    int arm=0;
    int og=n;
    while(n>0){
        int dg=n%10;
        arm=arm+(pow(dg,k));
        n=n/10;
    }
    return arm==og;
}


int main(){
    int n;
    cin>>n;
    isArmstrong(n);
}
