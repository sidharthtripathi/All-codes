#include <iostream>
using namespace std;
int main(){
string a;
string b;
string temp;
getline(cin,a);
getline(cin,b);
cout<<"reversed string is ";
temp = a;
a=b;
b=temp;
cout<<a<<endl<<b;


}