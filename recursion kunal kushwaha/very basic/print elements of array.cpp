#include <iostream>
using namespace std;
int print(int a[],int n);
int main(){
int a[5]={1,2,3,4,5};
print(a,5);


}
int print(int a[],int n ){
if(n==1){
    cout<<a[0]<<endl;
    return 0;
    }

print(a,n-1);
cout<<a[n]<<endl;

}

