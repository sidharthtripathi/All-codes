    #include<iostream>
    using namespace std;
    int main(){
     cout<<"type in start and end of even series: ";
     int s ,e,ans=0;
     sum:
     cin>>s>>e;

     if(!(s%2==1 and e%2==1)){
        cout<<"type in correct value ";
        goto sum;
     }

     for(int i =s ; i<= e; i=i+2){
        ans = ans + i;
     }
     cout<<ans;


}