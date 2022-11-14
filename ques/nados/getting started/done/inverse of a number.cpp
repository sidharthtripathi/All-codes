#include <iostream>
using namespace std;
#include<cmath>
//reverse of a number
int main(){
int n;
cin>>n;
int place=0,digit,ans=0;
while(n>0){
    digit=n%10;
    n=n/10;
    place++;
    ans=ans+(pow(10,digit-1)*place);
}
cout<<ans;

}