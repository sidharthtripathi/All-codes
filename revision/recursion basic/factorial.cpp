#include <iostream>
using namespace std;
int fact(int);

int main(){
cout<<fact(3);
}

int fact(int n){
if(n==0){
    return 1;
}
return n*fact(n-1);


}
