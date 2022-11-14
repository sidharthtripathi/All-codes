#include <iostream>
using namespace std;
void inverse(int a[],int n);
int main(){
int n;
cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
inverse(a,n);
for(int i = 0 ; i<n ; i++){
    cout<<a[i]<<endl;
}
}
void inverse(int a[],int n){
int b[n];
for(int i = 0 ; i<n ; i++){
    b[i]=a[i];
}
for(int i = 0 ; i<n ; i++){
    a[b[i]]=i;
}



}
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
for(int i = n-1 ; i>=0 ; i--){
    cout<<a[i]<<endl;
}




}
