#include <iostream>
using namespace std;
int span_arr(int[],int);
int main() {
int n;
cin>>n;
int a[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int d;
cin>>d;
int test=-1;
for(int i = 0 ; i<n ; i++){
    if(a[i]==d){
        test=i;
        cout<<i;
        return 0;
    }
}
 if(test==-1){
        cout<<test;
    }


}



