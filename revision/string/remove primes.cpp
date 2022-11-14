#include <iostream>
#include <vector>
using namespace std;
bool isprime(int a);
int main(){
int n;
cin>>n;
int *a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}

cout<<"[";
for(int i = 0 ; i<n ; i++){
    if(!isprime(a[i])){
    cout<<a[i]<<',';
    }
}
cout<<"]";


}

bool isprime(int a){
    if(a==1)
        return false;
    int ite=2;
    while(ite<a){
        if(a%ite==0){
            return false;
        }
        ite++;
    }
    return true;
}





