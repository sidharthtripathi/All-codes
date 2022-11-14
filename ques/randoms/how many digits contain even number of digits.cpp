#include <iostream>
using namespace std;
int digits(int a);
int main(){
 int n;
 cin>>n;
 int* a = new int[n];
  for(int i =0 ; i<n ; i++){
    cin>>a[i];
 }
 int sum=0 ;
 for(int i =0 ; i<n ; i++){
    if(digits(a[i])%2==0){
        sum++;
    }



 }
 cout<<sum;
}
int digits(int a){
    int ite =0;
    if(a==0){
        return 1;
    }
while(a>0){
    ite++;
    a=a/10;
}
return ite;
}




