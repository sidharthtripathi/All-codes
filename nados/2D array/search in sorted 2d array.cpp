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
int d;
cin>>d;
for(int i =0 ; i<n ; i++){
    for(int j =0 ; j<n ; j++){
        if(a[i][j]==d){
            cout<<"found at: "<<i<< " "<<j;
            return 0;
        }
    }
}
cout<<"not found :";


}
