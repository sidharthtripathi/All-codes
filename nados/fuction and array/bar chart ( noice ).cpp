#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int d;
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int maxi=a[0];
for(int i = 1; i<n; i++){
    if(a[i]>maxi)
        maxi=a[i];
}
for(int i = maxi ; i>=1; i--){
    for(int j = 0 ; j<n ; j++){
        if(a[j]<i)
            cout<<"\t";
        else
            cout<<"*\t";
    }
    cout<<endl;

}


}
