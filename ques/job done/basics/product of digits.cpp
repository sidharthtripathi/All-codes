    #include<iostream>
    using namespace std;
    int main(){
    cout<<"enter the number: ";
    int a,rem,ans=1;
    cin>>a;
    while(a){
        rem = a%10;
        ans= ans*rem;
        a=a/10;
    }
    cout<<"product of digits in given number: " <<ans;

}