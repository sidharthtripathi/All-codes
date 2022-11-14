    #include<iostream>
    using namespace std;
    int main(){
   cout<<"type in a number: ";
   int a;
   cin>>a;
   int test;
  int i =2;
  while(i<a){
    if(a%i==0){
        cout<<"not a prime number";
        break;
    }
    else{
        test=1;
    }
    i++;
  }
  if(test==1){
    cout<<"prime number";
  }

}
=====================
bool is_prime(int a){
 if(a==1)
    return 1;
 int ite=2;
 while(ite<a){
    if(a%ite==0){
        return 0;
    }
    ite++;
 }
    return 1;


}