#include <iostream>
#include <cmath>
using namespace std;
int main(){
int glass,r,c;
cout<<"glass: ";
cin>>glass;
cout<<"row_query: ";
cin>>r;
r++;
cout<<"glass_query :";
cin>>c;
double n  = (sqrt(1+(8 * glass))-1)/2;
if(r<=n){
    cout<<1;
    return 0;
}
if(r>ceil(n)){
    cout<<0;
    return 0;
}
int next_n = n+1;
int next_n_full = (next_n * (next_n+1)) / 2;
double extra_glass = next_n_full - glass;
double filled_fraction = extra_glass/(((next_n-2) * 2)+2);
if(c==0 or c==next_n-1){
    cout<<filled_fraction;
    return 0;
}
else{
    cout<<filled_fraction * 2;
    return 0;
}


}