#include<iostream>
using namespace std;
void print_char(int);
int main(){
int n ;
cin>>n;
int str=1,spc=n/2;
for(int i =1 ; i<=n ; i++){
    for(int j = 1 ; j<=spc ; j++){
        cout<<"\t";
    }
    for(int j = 1 ; j<=str ; j++){
        cout<<"*\t";
    }
    cout<<endl;
    if(i>=((n+1)/2)){
    str=str-2;
    spc++;
    }
    else{
    str=str+2;
    spc--;
    }



}
}


inline void print_char(int a){

    }