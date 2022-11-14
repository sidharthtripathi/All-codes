#include<iostream>
using namespace std;
int main(){
    cout<<"type in three numbers : ";
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b and a>c){
        cout<<a<<" " << "is greater";
    }
    else if (b>c and b>a)
        cout<<b<<" " <<"is greater";
    else
    cout<<c<<" " <<"is greatest";

}