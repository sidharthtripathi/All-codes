    #include<iostream>
    using namespace std;
    int main(){
    int a,sum;
    cin>>a;
    sum=a%10;
    while(a>9){
        a=a/10;
    }
    cout<<a+sum;


}