#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
for(int i=1; i<=n ; i++){
    for(int j = 1; j<=n ; j++){
        if((i>=2 and i<=n-1) and (j>=2 and j<=n-1) ){
        cout<<" ";
        }
        else
            cout<<"*";
    }
    cout<<endl;


}


}