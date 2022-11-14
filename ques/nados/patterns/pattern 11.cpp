#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
int ite=1;
for(int i=ite; i<=n ; i++){

    for(int j=1 ; j<=i ; j++){
        cout<<ite<<" ";
        ite++;
    }
    cout<<endl;


}

}