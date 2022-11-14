#include <iostream>
using namespace std;
bool prime_test(int a);
int nth_prime(int n);
int main(){

cout<<nth_prime(3);

}
int nth_prime(int n){

int counter = 0 ;
int i = 1;
while(counter!=n){
    if(prime_test(i)){
        counter++;
    }
    i++;
}
return i-1;


}


bool prime_test(int a){
for(int i = 2 ; i<a ; i++){
    if(a%i==0){
        return 0;
    }


}
return 1;


}
