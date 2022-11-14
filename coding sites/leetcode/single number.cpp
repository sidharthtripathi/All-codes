#include <iostream>
using namespace std;
int single(int a[], int n){
for(int i =0 ; i<n ; i++){
        int counter=0;
    for(int j = 0 ; j<n ; j++){
        if(a[i]==a[j]){
            counter++;
        }
    }
    if(counter==1)
        return a[i];

}



}
int main(){

int a[]={4,1,2,1,2};
cout<<single(a,5);
}








