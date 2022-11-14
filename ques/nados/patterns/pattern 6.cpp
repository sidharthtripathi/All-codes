#include<iostream>
using namespace std;
int main(){
int row ;
cin>>row;
int str=(row/2)+1,spc=1;
for(int i =1 ; i<=row ; i++){
    for(int j = 1 ; j<=str ; j++){
        cout<<"*\t";
    }
    for(int j = 1 ; j<=spc ; j++){
        cout<<"\t";
    }
    for(int j = 1 ; j<=str ; j++){
        cout<<"*\t";
    }
    cout<<endl;
    if(i>=(row+1)/2){
    str++;
    spc=spc-2;
    }
    else{
    str--;
    spc=spc+2;
    }



}
}
