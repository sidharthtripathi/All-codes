#include <iostream>
using namespace std;
void shift(int a[],int n);
int main(){
int n;
cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int rot;
cin>>rot;
for(int i= 1 ;i<=rot ; i++)
shift(a,n);
for(int i = 0 ; i<n ; i++){
    cout<<a[i]<<endl;
}
}
void shift(int a[],int n){
int b[n];
for(int i = 0 ; i<n ; i++){
    b[i]=a[i];
}
for(int i = 1 ; i<n ; i++){
    a[i]=b[i-1];
}
a[0]=b[n-1];


}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include <iostream>
using namespace std;
void rev(int* a , int n);
int main(){
int n;
cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int r;
cin>>r;
rev(a,n-r);
rev(a+(n-r),r);
rev(a,n);
for(int i = 0; i<n; i++){
    cout<<a[i]<<endl;
}



}
void rev(int* a , int n){
int* b = new int[n];
for(int i = 0 ; i<n ; i++){
    b[n-1-i]=a[i];
}
for(int i = 0 ; i<n ;i++){
    a[i]=b[i];
}





}

