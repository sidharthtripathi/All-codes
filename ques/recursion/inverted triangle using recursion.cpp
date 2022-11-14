#include<iostream>
using namespace std;
void inverted(int n){
    if(n==0){
        return;
    }
for(int i = 1; i<=n;i++){
    cout<<"*\t";
}
cout<<endl;
inverted(n-1);
}
int main(){
inverted(5);
}
