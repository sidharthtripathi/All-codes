#include<iostream>
using namespace std;
string rem_char(string , string);
int main(){
string name;
cin>>name;
string rem;
cin>>rem;
cout<<rem_char(name,rem);


}

string rem_char(string a , string rem){
int len = a.length();
for(int i=0 ; i<=len ; i++){

    for(int j = 0 ; j<3; j++){
    if(a[i]==rem[j]){
            int ite=i;
        while(a[ite]){
            a[ite]=a[ite+1];
            ite++;
        }
    }
    }
}
return a;
}
