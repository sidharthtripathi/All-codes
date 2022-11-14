#include<iostream>
using namespace std;
int ap_sum(int a,int d,int n){
    if(n==1){
        return a;
    }
return a+(n-1)*d + ap_sum(a,d,n-1);


}
int main(){
cout<<ap_sum(1,1,10);


}
