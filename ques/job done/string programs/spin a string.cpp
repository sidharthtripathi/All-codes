#include<iostream>
using namespace std;
string spin_string(string , int);
int main(){
cout<<spin_string("gajender",4);

}
string spin_string(string name , int n){
for(int j=1 ; j<=n ; j++){
int len = name.length();
char last = name[len-1];
for(int i =0 ; i<len ; i++){
    name[len-i]=name[(len-i)-1];
}
name[0]=last;
}
return name;
}