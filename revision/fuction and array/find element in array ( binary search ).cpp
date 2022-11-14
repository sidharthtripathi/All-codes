//assuming array is sorted

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int d;
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
cout<<"element to find: ";
cin>>d;
bool found;
for(int i = 0 ; i<n ; i++){
    if(a[i]==d){
        cout<<i;
        found=true;
        break;

    }
}
if(found == false)
cout<<-1;



}
