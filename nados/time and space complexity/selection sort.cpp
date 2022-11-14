#include <iostream>
using namespace std;
void bubble(int a[],int n);
void selection(int a[],int n);
int main(){
int n ;
cin>>n;

int *a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
selection(a,n);
for(int i = 0 ; i<n ; i++){
    cout<<a[i]<<" ";
}

}
void selection (int a[],int n){

for(int i = 0; i<n-1; i++){
    int min_index = i;
    for(int j = i+1 ; j<n; j++){
        if(a[j]<a[min_index]){
            min_index = j;
        }
    }
    int temp = a[i];
    a[i]=a[min_index];
    a[min_index]=temp;
}


}
