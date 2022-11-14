#include <iostream>
using namespace std;
void swapi(int a[],int i,int e);
int main(){
int n;
cin>>n;
int *a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
for(int i = 0 ; i<n ; i++){
int ite = n-1;
if(a[i]%2==1){
    while(!(a[ite]%2==0) and ite>i){
        ite--;
    }
    swapi(a,i,ite);
    ite--;
}

}
for(int i = 0 ; i<n  ;i++){
    cout<<a[i]<<" ";
}
}
void swapi(int a[],int i , int e){
int temp = a[i];
a[i]=a[e];
a[e]=temp;


}