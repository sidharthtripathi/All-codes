#include<iostream>
#include<cmath>
using namespace std;
int nth_gp(int a,int r,int n){
    if(n==1){
        return a;
    }
return r*nth_gp(a,r,n-1);


}
int main(){
cout<<nth_gp(2,2,10);


}
