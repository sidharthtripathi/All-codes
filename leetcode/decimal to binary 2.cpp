#include <iostream>
#include <cmath>
using namespace std;
int ToBinary(int a){
    if(a==0){
        return 0;
    }
int ans = 0 ;
int j =0;
while(a/2!=0){
    ans = ans + (a%2)*pow(10,j);
    a=a/2;
    j++;
}
ans = ans + 1*pow(10,j);
return ans;

}
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
inline int ofb(int a){
int sum = 0;
int j=0;
while(a>0){
    if(a%10==1){
        sum = sum + 1*pow(10,j);
        j++;
    }
    a=a/10;
}
return sum;


}
int main(){
int n;
cin>>n;
int *a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
int * binary_array = new int[n];
for(int i = 0 ; i<n ; i++){
    binary_array[i]=ofb(ToBinary(a[i]));
}
for(int i = 0 ; i<n ; i++){
    cout<<ToDecimal(binary_array[i])<<endl;
}

}

