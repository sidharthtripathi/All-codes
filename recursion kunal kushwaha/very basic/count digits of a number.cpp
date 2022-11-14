#include <iostream>
using namespace std;
int count_dig(int a);
int main(){
cout<<count_dig(-12);


}
int count_dig(int a ){
if(a<0)
a=-a;
if(a>=1 and a<10)
    return 1;
return 1+count_dig(a/10);

}

