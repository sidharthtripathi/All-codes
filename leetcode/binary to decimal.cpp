#include <iostream>
#include <cmath>
using namespace std;
int main(){
string s;
cin>>s;
int ans = 0;
for(int i = s.length()-1,j=0 ; i>=0 ; i--,j++){
    int a = s[i]-48;
    ans = ans + a*pow(2,j);

}
cout<<ans;


}



///////////////////////////////


int ToDecimal(int s){
int ans = 0;
int j =0 ;
while(s>0){
    int a = s%10;
    s=s/10;
    ans = ans + a*pow(2,j);
    j++;

}
return ans;



}