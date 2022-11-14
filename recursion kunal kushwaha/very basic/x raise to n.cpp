#include <iostream>
using namespace std;
int pow(int base,int power);
int main(){
cout<<pow(7,3);


}
int pow(int base,int power ){
if(power==0)
    return 1;
return base*pow(base,power-1);

}

