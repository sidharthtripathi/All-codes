#include<iostream>
#include<cmath>
double fact(int a){
int ans=1;
while(a>0){
    ans=ans*a;
    a--;
}
return ans;

}
using namespace std;
int main(){
double x;
cin>>x;
double ans = 0 ;
double mul = 1;
double val=0;
for(int i =1 ; i<=8; i++){
    mul = mul*(2*i-1)*(2*i-1);
    val=(mul*pow(x,2*i+1))/fact(2*i+1);
    ans= ans+val;

}
ans = (ans + x);
cout<<ans;
}
