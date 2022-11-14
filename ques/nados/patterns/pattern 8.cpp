#include<iostream>
using namespace std;
int main(){
int row ;
cin>>row;
int spc = row-1;
for(int i =1 ; i<=row ; i++){
        for(int j = 1 ; j<= spc ; j++){
            cout<<"\t";
        }
        cout<<"*"<<endl;
        spc--;

}
}
