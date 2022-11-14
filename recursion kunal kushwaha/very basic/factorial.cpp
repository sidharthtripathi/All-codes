#include <iostream>
using namespace std;
double fact(double);
int main(){


cout<<fact(4);


}
double fact(double a){
if(a==0){
    return 1;
}
return a*fact(a-1);
}

