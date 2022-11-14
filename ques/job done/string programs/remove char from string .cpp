#include<iostream>
using namespace std;
int main(){
string a;
cin>>a;
int len = a.length();
char rem;
cin>>rem;
for(int i=0 ; i<len ; i++){
    if(a[i]==rem){
            int ite=i;
        while(a[ite]){
            a[ite]=a[ite+1];
            ite++;
        }
    }
}
cout<<a;

}