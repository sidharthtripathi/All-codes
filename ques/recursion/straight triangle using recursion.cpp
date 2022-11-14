#include<iostream>
using namespace std;
int m=1;
void inverted(int n){
    if(n==0){
        return;
    }
for(int i = 1; i<=m;i++){
    cout<<"*\t";
}
m++;
cout<<endl;
inverted(n-1);
}
int main(){
inverted(5);
}
