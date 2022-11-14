#include <iostream>
using namespace std;
int main() {
int a;
cin>>a;
int ite=2;
while(a!=1){
    while(a%ite==0){
        a=a/ite;
        cout<<ite<<" ";
    }
    ite++;
}


}