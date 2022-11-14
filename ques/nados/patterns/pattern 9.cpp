#include<iostream>
using namespace std;
int main(){
int row ;
cin>>row;
for(int i =1 ; i<=row ; i++){
    for(int j = 1 ; j<=row ; j++){
        if(i==j or i+j==row+1){
            cout<<"*\t";
        }
        else{
            cout<<"\t";
        }

    }
    cout<<endl;
}

}
