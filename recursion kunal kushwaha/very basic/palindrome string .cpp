#include <iostream>
using namespace std;
int palindrome(string a , int s , int e);
int main(){


string a = "ajjeaa";
int l = a.length()-1;
cout<<palindrome(a,0,l);


}
int palindrome(string a,int s , int e){
if(s==e ){
    return 1;
}
if(e<s)
    return -1;
return a[s]==a[e] and palindrome(a,s+1,e-1);
}

