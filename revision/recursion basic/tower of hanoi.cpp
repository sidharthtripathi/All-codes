#include <iostream>
using namespace std;
int hanoi(int n , char a , char b ,char c);
int main(){
int n;
cin>>n;
hanoi(n,'a','b','c');


}
int hanoi(int n ,char a , char b , char c){
if(n==0)
    return 0;
hanoi(n-1,a,c,b);
cout<<n<<" "<<a<<" => "<<b<<endl;
hanoi(n-1,c,b,a);

}
