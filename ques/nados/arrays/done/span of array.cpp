#include <iostream>
using namespace std;
int span_arr(int[],int);
int main() {
int a[4]={1,2,3,4};
cout<<span_arr(a,4);

}

int span_arr(int a[],int n){
int max_ele=-1,min_ele=100;
for(int i = 0 ; i<n ; i++){
    if(a[i]>max_ele){
        max_ele = a[i];
    }
    if(a[i]<min_ele){
        min_ele=a[i];
    }



}
   int span = max_ele - min_ele;
    return span;





}