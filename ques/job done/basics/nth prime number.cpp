#include <iostream>
using namespace std;
bool is_prime(int);
int main(){
    cout<<"which prime number: ";
    int a;
    cin>>a;
    int ite=0;
for(int i =1 ; i<=10000000000; i++){
    if(is_prime(i)){
            ite++;
        if(ite==a){
            cout<<i;
            break;
        }
    }
}


}
bool is_prime(int a){
 if(a==1)
    return 1;
 int ite=2;
 while(ite<a){
    if(a%ite==0){
        return 0;
    }
    ite++;
 }
    return 1;


}