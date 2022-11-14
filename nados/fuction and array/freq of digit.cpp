#include<iostream>
using namespace std;
int main(){
int n,d;
cin>>n>>d;
int ite=0;
while(n>0){
    if(n%10==d){
        ite++;
    }
    n=n/10;
}
cout<<ite;

}
