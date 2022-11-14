#include <iostream>
using namespace std;
int duplicates(int a[], int n){
    bool dup=false;
for(int i =0 ; i<n ; i++){
    for(int j = i+1 ; j<n ; j++){
        if(a[j]==a[i] and i<n){
            return true;
        }
    }

}
return dup;
}
int main(){

int a[]={1,1,1,3,3,4,3,2,4,2};
cout<<duplicates(a,2);
}








