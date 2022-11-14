#include<iostream>
using namespace std;
double pow(double base , int power);
inline int mod(int a);
int main(){
cout<<pow(2.3,2);

}

double pow(double base , int power){
if(power==0)
return 1;
double n=power;
double positive_base=base;
if(base<0)
positive_base=-base;
if(power<0)
n=-power;
double ans=1;
for(int i = 1; i<=n ; i++){
    ans = positive_base*ans;
}
if(base>0 and power<0)
    return 1/ans;
else if(base>0 and power>0)
    return ans;
else if(base <0 and power>0 and mod(power)%2==0)
        return ans;
else if (base<0 and power>0 and mod(power)%2==1) //weird case
        return -ans;
else if(base<0 and power<0 and mod(power)%2==0)
        return 1/ans;
else if(base<0 and power<0 and mod(power)%2==1)
        return -(1/ans);   //updated here



}
inline int mod(int a){
if(a>0)
    return a;
if(a<0)
    return -a;

}
