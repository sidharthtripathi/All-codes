#include <iostream>
using namespace std;
int main(){
string a;
cin>>a;
int l = a.length();
for(int i = 0 ; i<l ; i++){
        int c=a[i];
    if(c>=97 and c<=122){
        char b=c-32;
        a[i]=b;
    }
    else{
        char b=c+32;
        a[i]=b;
}
}
cout<<a;

}



