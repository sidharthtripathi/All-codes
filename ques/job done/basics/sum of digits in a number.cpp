    #include<iostream>
    using namespace std;
    int main(){
     int a,rem=0,ans=0;
	cin>>a;
    while(a){
        rem = a%10;
        ans = ans+rem;
        a= a /10;
    }
	cout<<ans;
}


