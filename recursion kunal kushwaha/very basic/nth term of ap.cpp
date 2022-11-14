#include <iostream>
using namespace std;
int an(int a,int d , int n);
int main(){
cout<<an(2,3,3);




}
int an(int a,int d , int n){
if(n==1){
    return a;
}
return d+ an(a,d,n-1);

}
