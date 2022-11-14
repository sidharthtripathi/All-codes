#include <iostream>
using namespace std;
int print(int);
int main(){

print(10);

}
int print(int a){
cout<<a<<endl;
if(a==1){
    return 0;
}
print(a-1);
}

