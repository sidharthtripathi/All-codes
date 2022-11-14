#include <iostream>
using namespace std;
int occu_index(int a[],int d,int i ,int e );
int main(){
int a[]={1,2,33,4,2};
occu_index(a,44,0,4);

}
int occu_index(int a[],int d ,int i,int e){
if(i==e){
    if(a[i]==d){
        cout<<i;
        return 0;
    }
    else{
        return 0;
    }
}
if(a[i]==d){
    cout<<i<<endl;

}
occu_index(a,d,i+1,e);

}
