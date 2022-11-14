#include <iostream>
using namespace std;
inline void increment(int a[],int n){
a[n-1]=a[n-1]+1;
}

int main(){
int a[]={1,2,3,4};
increment(a,4);
for(int i = 0 ; i<4 ;i++){
    cout<<a[i];
}

}
