#include <iostream>
using namespace std;
int binary(int a[],int target , int s , int e);
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
cout<<binary(a,3,0,9);



}
int binary(int a[],int target , int s , int e){
if(s>e)
    return -1;
int m = (s+e)/2;
if(a[m]==target){
    return m;
}
else if(target>a[m])
binary(a,target,m+1,e);
else
    binary(a,target,s,m-1);



}
