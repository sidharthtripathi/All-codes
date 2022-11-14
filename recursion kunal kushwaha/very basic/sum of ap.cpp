#include <iostream>
using namespace std;
int s_ap(int a,int d , int n);
int main(){
cout<<s_ap(2,3,3);




}
int s_ap(int a,int d , int n){
if(n==1){
    return a;
}
return s_ap(a,d,n-1) + (a+(n-1)*d);

}
