#include <iostream>
using namespace std;
int main(){
string a;
getline(cin,a);
int length=0;
while(a[length]){
    length++;
}
cout<<length;
}