    #include<iostream>
    using namespace std;
    int main(){
      cout<<"type in two numbers for HCF in increasing order: ";
      int a,b;
      cin>>a>>b;
      int i=a;
      while(!(a%i==0 and b%i==0) ){
        i--;

      }
      cout<<i;
    }