#include <iostream>
using namespace std;
void rotate_arr(int a[],int n);
int main(){
int n;
cin>>n;
int* a = new int[n];
for(int i =0 ; i<n ; i++){
    cin>>a[i];
}

for(int i =0 ; i<n ; i++){
    cout<<a[i]<<endl;
}
}

void rotate_arr(int a[],int n){
int b[n];
for(int i =0 ; i<n ; i++){
    b[i]=a[i];
}
for(int i =0 ; i<n-1 ; i++){
    a[i+1]=b[i];
}
a[0]=b[n-1];
}




