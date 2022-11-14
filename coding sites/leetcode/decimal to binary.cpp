#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a;
cin>>a;
int ans = 0 ;
int j =0;
while(a/2!=0){
    ans = ans + (a%2)*pow(10,j);
    a=a/2;
    j++;
}
ans = ans + 1*pow(10,j);
cout<<ans;


}
