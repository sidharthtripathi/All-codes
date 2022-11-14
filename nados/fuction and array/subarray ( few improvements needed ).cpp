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
for(int k = 0 ; k<n ; k++){
for(int i = 1; i<=n; i++){
    for(int j = k ; j<i ; j++){
        cout<<a[j]<<"\t";
    }
    cout<<endl;
}
}
}
