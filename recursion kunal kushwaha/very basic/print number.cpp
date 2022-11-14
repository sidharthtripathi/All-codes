#include <iostream>
using namespace std;
int print(int a);
int main(){
print(5);



}
int print(int a){
  if(a==1){
    cout<<1<<endl;
    return 0;
  }
  print(a-1);
  cout<<a<<endl;




}
