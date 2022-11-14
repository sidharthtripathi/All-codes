#include <iostream>
using namespace std;
int print(int a[],int i , int n );
int main(){
    int a[5]={1,2,4,5,6};
print(a,0,5);


}
int print(int a[],int i , int n ){
if(i==n)
   return 0;
cout<<a[i]<<endl;
print(a,i+1,n);


}
