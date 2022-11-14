#include <iostream>
using namespace std;
double pow(int  , int);
int main(){
cout<<pow(2,100);
}

double pow(int base , int n){
    if(n==0)
        return 1;
        double ans = pow(base,n/2) ;
        if(n%2==0){
    return ans*ans;
        }
    else
        return base*ans*ans;

}
