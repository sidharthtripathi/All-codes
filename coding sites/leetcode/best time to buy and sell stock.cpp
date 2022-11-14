#include <iostream>
using namespace std;
int stock(int a[], int n){
int mini=a[0];
int mini_index;
for(int i = 1 ; i<n ; i++){
    if(a[i]<mini){
        mini=a[i];
        mini_index=i;
    }
}
int maxi=a[mini_index];
int ans=0;
for(int i = mini_index ; i<n ; i++){
    if(a[i]>maxi){
        ans=i;
    }
}
return ans;



}
int main(){

int a[]={7,6,4,3,1};
cout<<stock(a,5);
}








