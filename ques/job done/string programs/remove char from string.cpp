#include <iostream>
using namespace std;
string strcpy(string, string);
int main(){

string a;
cin>>a;
char b;
cin>>b;
int strlen = a.length();
for(int i = 0 ; i<strlen ; i++){
    if(a[i]==b){
            int ite=i;
        while(a[ite]){
            a[ite]=a[ite+1];
          ite++;
        }
        i--;
    }


}
cout<<a;
}

