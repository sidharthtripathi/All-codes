#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int maxi=a[0];
int mini=a[0];
for(int i = 1; i<n ; i++){
    if(a[i]>maxi){
        maxi=a[i];
    }
    if(a[i]<mini){
        mini=a[i];
    }


}
cout<<maxi-mini;

}
