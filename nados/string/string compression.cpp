#include <iostream>
using namespace std;
int main(){
string a;
cin>>a;
int l = a.length();
cout<<a[0];
int i=1;
while(i<l){
if(a[i]!=a[i-1])
cout<<a[i];
i++;
}
cout<<endl;
cout<<a[0];
i=1;
while(i<l){
    int ite=0;
    while(a[i]==a[i-1]){
        i++;
        ite++;
    }
    if(ite>=1)
    cout<<ite+1;
    cout<<a[i];
    i++;
}
cout<<endl;


}



