#include <bits/stdc++.h>
using namespace std;

void pattern21(int n){
    for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top=i;
                int left=j;
                int right=(2*n-2)-j;
                int bottom=(2*n-2)-i;
                cout<<(n - min({top,left,right,bottom}));;
            }
        cout<<endl;
        
    }
}

int main()
{
    int n;
    cin >> n;
    pattern21(n);
}