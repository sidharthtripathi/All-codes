#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int first = 0 ;
int second = 1;
cout<<first<<endl<<second<<endl;
int sum = 0;
for(int i = 1; i<=n; i++){
        sum=first + second;
        cout<<sum<<endl;
        first = second;
        second = sum;
}

} 
