    #include<iostream>
    using namespace std;
    int main(){
    int a,rem,ans=0;
    cin>>a;
    while(a){
        rem = a%10;
        ans= (ans*10) + rem;
        a = a/10;


    }
    cout<<ans;
}