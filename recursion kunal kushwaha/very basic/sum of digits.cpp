#include <iostream>
using namespace std;
int sum_dig(int a);
int main(){
cout<<sum_dig(453);


}
int sum_dig(int a ){
if(a>=1 and a<10)
    return a;
return a%10 + sum_dig(a/10);

}

