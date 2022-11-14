#include <iostream>
using namespace std;
void bubble(int a[],int n);

int main(){
int n ;
cin>>n;

int *a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
bubble(a,n);
for(int i = 0 ; i<n ; i++){
    cout<<a[i]<<" ";
}

}
void bubble (int a[],int n){

for(int i = 0 ; i<n-1 ; i++){
for(int j = 1 ; j<n-i; j++){
    if(a[j-1]>a[j]){
        int temp = a[j];
        a[j]=a[j-1];
        a[j-1]=temp;

    }
}
}


}
