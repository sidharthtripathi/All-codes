#include <iostream>
using namespace std;
int rev_array(int a[],int n );
int main(){
int a[]={1,2,3,4,5};
rev_array(a,5);

}
int rev_array(int a[],int n){
    if(n==0)
        return 0;
cout<<a[n-1]<<endl;
rev_array(a,n-1);

}
