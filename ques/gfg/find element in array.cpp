#include <iostream>
using namespace std;
int main(){
    cout<<"size of array: ";
int size_of_arr;
cin>>size_of_arr;
cout<<"type in the elements:"<<endl;
int num[size_of_arr];
for(int i = 0 ; i<size_of_arr ; i++){
    cin>>num[i];


}
int a;
cout<<"element to find: ";
cin>>a;
bool found_key;
for(int i = 0 ; i<size_of_arr ; i++){
    if(a==num[i]){
        found_key=1;
        cout<<"yes exist at index: "<<i;
    }

}
if(found_key!=1){
    cout<<"not found";
}

}
