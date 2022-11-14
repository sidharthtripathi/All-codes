#include<iostream>
using namespace std;
int main(){
int row ;
cin>>row;
int str=1,spc=0;
for(int i =1 ; i<=row ; i++){
    for(int j = 1 ; j<=spc; j++){
        cout<<"\t";
    }
    for(int j = 1 ; j<=str ; j++){
        cout<<"*\t";
    }
    cout<<endl;
    spc++;



}
}
///////////OR

for(int i =1 ; i<=n ; i++){
	for(int j =1 ; j<=n ; j++){
		if(i==j){
			cout<<"*";
			}
			}
}	