#include <iostream>
using namespace std;
int digits(int);
int print_digits(int a);
int main(){

print_digits(563);


}
int print_digits(int a){
int rem;
int ite=0;
int digit=digits(a);
int ans[digit];
while(a>0){
    rem = a%10;
    ans[(digit-ite)-1] = rem;
    a=a/10;
    ite++;
}
for(int i = 0 ; i<digit ; i++){
    cout<<ans[i]<<endl;
}
}
int digits(int a){
int ite =0;
while(a>0){
    ite++;
    a=a/10;

}
return ite;

}