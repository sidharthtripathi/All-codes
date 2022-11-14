#include <iostream>
using namespace std;
char first_cap(string a,int i,int l);

int main(){
string a="gajender";
int l = a.length();
cout<<first_cap(a,0,l);

}
char first_cap(string a,int i ,int l){
int c = a[i];
if(i>l-1)
    return '!';
if(c>=65 and c<=90){
    return a[i];
}
return first_cap(a,i+1,l);

}

