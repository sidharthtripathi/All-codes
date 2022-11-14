#include <iostream>
using namespace std;
int hailstrom(int  a);
int main(){
int n;
cin>>n;
cout<<n<<endl;
hailstrom(n);

}
int hailstrom(int a){
if(a==1){
    //cout<<1<<endl;
    return 0;
}

if(a%2==0){
    cout<<a/2<<endl;
    hailstrom(a/2);
}
else{
    cout<<(3*a + 1)<<endl;
    hailstrom(3*a + 1);
}

}

