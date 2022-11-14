#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
for(int i = 1 ; i<=n ; i++){
    for(int k=0 ;k<i;k++){
        cout<<" ";
    }

    for(int j = n-i ;j>=0; j-- ){
    cout<<"*";
    }
    cout<<endl;


}


}
