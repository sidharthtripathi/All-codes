#include <iostream>
using namespace std;
int occu_index(int a[],int d,int i ,int e );
int main(){
int a[]={1,22,33,4,22};
cout<<occu_index(a,22,0,4);

}
int occu_index(int a[],int d ,int i,int e){
if(e==-1){
    return -1;
}
if(a[e]==d){
    return e;
}
else{
    return occu_index(a,d,i,e-1);
}

}
