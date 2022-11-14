#include <iostream>
using namespace std;
int main(){
string a;
cin>>a;
int size_of_string = a.length();

for(int i =0 ; i<size_of_string ; i++){
    if(a[i]>=65 and a[i]<=90){
        a[i]=a[i]+32;
    }
}
cout<<a;


}