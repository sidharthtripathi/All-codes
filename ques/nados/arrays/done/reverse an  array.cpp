#include <iostream>
using namespace std;
void rev_arr(int[],int);
int main() {
int n;
cin>>n;
int* a = new int[n];
for(int i =0 ; i<n ; i++){
    cin>>a[i];
}
for(int i =0 ; i<n ; i++){
    cout<<a[i]<<endl;
}

rev_arr(a,n);
for(int i =0 ; i<n ; i++){
    cout<<a[i]<<endl;
}


}
void rev_arr(int a[],int n){
int b[n];
for(int i = 0 ; i< n ; i++){
    b[i]=a[i];
}
for(int i = 0 ; i<n ; i++){
    a[i]=b[(n-1)-i];
}
}




