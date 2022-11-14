#include <iostream>
using namespace std;
int print(int);

int main(){
print(5);
}

int print(int n){
if(n==0)
    return 0;
cout<<n<<endl;
print(n-1);
cout<<n<<endl;

}
