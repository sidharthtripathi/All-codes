#include <iostream>
using namespace std;
#include<cmath>
int digits(int);
//rotate a number
int main(){
int n;
int rotation;
cin>>n>>rotation;
int tenth= pow(10,rotation);
int rem=n%tenth;

int ans;
ans=rem*pow(10,digits(n)-rotation)+(n/pow(10,rotation));
cout<<ans;
}
int digits(int n ){
    int ite=0;
while(n>0){
    n=n/10;
    ite++;
}
return ite;
}
