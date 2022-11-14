#include <iostream>
using namespace std;
int rev_string(string a,int n);
int main(){
string a = "string test";

rev_string(a,a.length()-1);


}
int rev_string(string a , int n  ){
if(n==0){
    cout<<a[0];
    return 0;
}
cout<<a[n];
rev_string(a,n-1);

}

