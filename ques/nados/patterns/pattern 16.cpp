#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
int spc = 2*n -3;
int num;
for(int i =1 ; i<= n ; i++){
    num=1;
    for(int j = 1 ; j<= i ; j++){
        cout<<num<<"\t";
        num++;
    }
    for(int j = 1 ; j<=spc ; j++){
        cout<<"\t";
    }
    spc=spc-2;
    if(i==n){
        num=n-1;
    }
    else{
    num=i;
    }
    for(int j = 1; j<=i ;j++){
        cout<<num<<"\t";
        num--;
    }
    cout<<endl;



}

}