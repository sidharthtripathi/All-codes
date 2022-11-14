#include <iostream>
using namespace std;
int s(int n);
int main(){
cout<<s(4);




}
int s(int n ){
if(n==1)
    return 1;
return s(n-1)+ n;

}

