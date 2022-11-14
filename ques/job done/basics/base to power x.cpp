    #include<iostream>
    using namespace std;
    int main(){
cout<<"type in base and power: ";
int base, power,ans=1;
cin>>base >> power;
for(int i = 1 ; i<=power ; i++){
    ans = ans*base;

}
cout<<ans;

}
