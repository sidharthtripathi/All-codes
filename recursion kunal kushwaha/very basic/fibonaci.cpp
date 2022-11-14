#include <iostream>
using namespace std;
int fib(int);
int main(){
cout<<fib(50);



}
int fib(int n ){
if(n<2){
    return n;
}
return fib(n-1)+ fib(n-2);



}
