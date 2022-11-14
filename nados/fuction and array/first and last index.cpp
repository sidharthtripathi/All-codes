#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int l=0;
int h = n-1;
int m;
int d;
cin>>d;
m=0;
int si= -1;
while(l<=h){
    m=(l+h)/2;
    if(d>a[m])
        l=m+1;
    else if(d<a[m])
        h=m-1;
    else{
        si=m;
        l=m+1;
    }

}
l=0;
h=n-1;
int fi=-1;
while(l<=h){
    m=(l+h)/2;
    if(d>a[m])
        l=m+1;
    else if(d<a[m])
        h=m-1;
    else{
        fi=m;
        h=m-1;
    }
}
cout<<fi<<endl<<si;


}
