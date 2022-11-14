#include <iostream>
using namespace std;
int max_ele(int a[],int n);
int main() {
int n;
cin>>n;
int a[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int m=max_ele(a,n);
for(int i = m ; i>=1 ; i--){
    for(int j = 0 ; j<n ; j++){
        if(a[j]<i){
            cout<<"\t";
        }
        else if(a[j]>=i)
            cout<<"*\t";
    }
    cout<<endl;
}

}
int max_ele(int a[],int n){
int max_ele = -1;
for(int i = 0 ; i< n ; i++){
    if(a[i]>max_ele){
        max_ele=a[i];
    }
}
return max_ele;


}



