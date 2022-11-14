#include<iostream>
using namespace std;
int* two_sum(int a[],int n,int target);
int main()
{
    int n;
    cin>>n;
int * a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int target;
cout<<"target: ";
cin>>target;
int *b = two_sum(a,n,target);
cout<<*b<< " "<<*(b+1);

}
int* two_sum(int a[],int n,int target){
int * b = new int[2];
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<n ; j++){
        if(a[i]+a[j]==target){

            b[0]=i;
            b[1]=j;
            return b;
        }
    }
}
b[0]={-1};
b[1]=-1;
return b;





}
