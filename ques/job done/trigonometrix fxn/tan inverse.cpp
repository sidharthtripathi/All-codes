#include<iostream>
#include<cmath>
using namespace std;
int one(int a){
if(a%2==0){
    return -1;
}
else
    return 1;

}
int main(){
double x;
cin>>x;
double ans =0 ;
for(int i = 1 ; i<=650 ; i++){
    ans = ans + one(i)*pow(x,i)/(2*i-1);

}
ans=ans/3.14;
cout<<ans*180;

}

