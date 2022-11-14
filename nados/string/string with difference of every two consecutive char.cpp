#include <iostream>
using namespace std;
int main(){
string a;
cin>>a;
int l = a.length();
cout<<a[0];
for(int i =1 ; i<l  ; i++){
    int c = a[i]-a[i-1];
    cout<<c;
    cout<<a[i];
}
cout<<endl;

}