#include <iostream>
using namespace std;
int maxi(int a[],int i,int n );
int main(){
int a[]={1,2,33,4,5};
cout<<maxi(a,0,5);

}
int maxi(int a[],int i,int n){
if(i==n-1)
    return a[i];
int f_maxi = a[i];
int maxi_of_shorter = maxi(a,i+1,n);
if(f_maxi>maxi_of_shorter){
    return f_maxi;
}
else{
    return maxi_of_shorter;
}

}
