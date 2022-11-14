#include <iostream>
using namespace std;
int occu_index(int a[],int d,int i ,int n );
int main(){
int a[]={1,22,33,4,22};
cout<<occu_index(a,22,0,4);

}
int occu_index(int a[],int d ,int i,int e){
if(i==e+1){
    return -1;
}
if(a[i]==d){
    return i;
}
else{
    return occu_index(a,d,i+1,e);
}

}
