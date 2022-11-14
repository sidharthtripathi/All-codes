#include <iostream>
using namespace std;
int an(int a,int r , int n);
int main(){
cout<<an(2,3,3);




}
int an(int a,int r , int n){
if(n==1){
    return a;
}
return r*(an(a,r,n-1));

}

