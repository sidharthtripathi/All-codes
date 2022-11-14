#include <iostream>
using namespace std;
int main(){
int size_of_arr;
cin>>size_of_arr;
int num[size_of_arr];
for(int i = 0 ; i<size_of_arr ; i++){
    cin>>num[i];


}
int ans=0;
for(int i = 0 ; i<size_of_arr ; i++){
    ans= ans + num[i];


}
cout<<ans;

}
