#include <iostream>
using namespace std;
int main(){
string a;
getline(cin,a);
int length=0,sum=0;

while(a[length]){
   sum= sum+ a[length];
    length++;

}
cout<<sum;
}