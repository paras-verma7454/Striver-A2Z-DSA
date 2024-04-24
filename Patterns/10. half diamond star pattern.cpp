#include<bits/stdc++.h>
using namespace std;

int pattern1(int n){
    for (int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
}
}
int pattern2(int n){
for (int i = 0; i<=n; i++){
        for(int j =n-1; j>i; j--){
            cout <<"* ";
        }
        cout<<endl;
}
}


int main (){
    int n=5 ;
    
    pattern1(n);
    pattern2(n);


}