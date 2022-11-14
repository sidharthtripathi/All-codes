#include <iostream>
#include <cmath>
using namespace std;
bool power_of_two(double a);
int main(){
double a;
cin>>a;
cout<<power_of_two(a);

}

bool power_of_two(double a){
    if(a<0)
    return false;     //base to power something can never be negative
int i =0;
while(!(a==pow(2,i))){
    if(a>0 and a<1)
    i--;
    else
    i++;
    if(i>31 or i<-31){
        return false;
    }

}
return true;
}