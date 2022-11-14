#include <iostream>
using namespace std;


int main(){
    cout<<"nth term of fiboncci: ";
    int n ;
    cin>>n;
int prev_val =0;
int ahead_val =1;
int ans;
for(int i = 1 ; i<=n; i++){
    ans = prev_val+ahead_val;
    cout<<ans<<endl;
    prev_val=ahead_val;
    ahead_val = ans;

}


}
