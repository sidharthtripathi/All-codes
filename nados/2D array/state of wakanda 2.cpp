#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n][n];
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<n ; j++){
        cin>>a[i][j];
    }
}
for(int i = 0 ; i<n; i++){
    int k=i;
    for(int j = 0; j<n-i; j++){
        cout<<a[j][k]<<endl;
        k++;
    }
}


}
