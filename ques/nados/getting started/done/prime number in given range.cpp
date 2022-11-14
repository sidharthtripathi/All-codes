#include <iostream>
using namespace std;
bool is_prime(int);


int main(){
int s,e;
cin>>s>>e;
for(int i=s; i<=e; i++){
    if(is_prime(i))
        cout<<i<<endl;
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