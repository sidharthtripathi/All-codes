#include <iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
int a[m][n];
for(int i = 0 ; i<m ; i++){
    for(int j = 0 ; j<n ; j++){
        cin>>a[i][j];
    }
}
for(int i = 0 ; i<m ; i++){
    for(int j = 0 ; j<n ;j++ ){
        if(i%2==0)
            cout<<a[j][i];
        else
            cout<<a[(m-j)-1][i];
    }
}

}
