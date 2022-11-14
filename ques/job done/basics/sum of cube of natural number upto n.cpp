    #include<iostream>
    using namespace std;
    int main(){
    cout<<"sum of sq of natural number upto: ";
    int e,ans=0;
    cin>>e;
    for(int i =1  ; i<=e ; i++){
        ans = ans + (i*i*i) ;
    }
    cout<<ans;


}