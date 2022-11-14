#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=2;
while(n!=1){
    while(n%i==0){
        n=n/i;
        cout<<i<<endl;
    }
    i++;

}
}