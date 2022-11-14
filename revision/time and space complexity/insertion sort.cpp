#include <iostream>
using namespace std;
void bubble(int a[],int n);
void insertion(int a[],int n);
int main(){
int n ;
cin>>n;

int *a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
insertion(a,n);
for(int i = 0 ; i<n ; i++){
    cout<<a[i]<<" ";
}

}
void insertion (int a[],int n){

for (int i = 0 ; i<n-1; i++){
    //here we assume that array is sorted till i_th index
    for(int j = i+1 ; j>0 ; j--){
        if(a[j-1]>a[j]){
            int temp = a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
           // break;
        }
    }



}


}
