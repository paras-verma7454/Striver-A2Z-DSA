#include<bits/stdc++.h>
using namespace std;

void pattern(int n ){
    int space=2*(n-1);
    for( int i = 1; i <=n; i++ ){
        //number
        for( int j = 1; j <=i; j++ ){
            cout<<j;


        }
        //space
        for( int i = 0; i<space; i++){
            cout<<" ";
        }
        //number
        for( int j = i; j >0; j--){
            cout<<j;

        }
        cout<<endl;
        space-=2;
    }
    
}

int main(){
    int n=5;
    // cin >> n;
    pattern(n);
}